#主线程都结束了 其他线程还在继续为了避免资源浪费就得让其他线程结束 
#用thread.daemon = True 就可以让线程变成守护线程 在thread.start()之前设置
#注意事项 所有子线程都必须设置守护线程 否则主线程结束 子线程不会结束
import threading
import time

def singing():
    for i in range(5):
        print("正在唱歌呢，请稍等...", i)
        time.sleep(1)
        
def dancing():
    for i in range(5):
        print("正在跳舞呢，请稍等...", i)
        time.sleep(1)


if __name__ == '__main__':
    # 记录开始时间
    start_time = time.time()
    
    # 创建并启动线程
    t1 = threading.Thread(target=singing)
    # 设置守护线程 在start之前
    t1.daemon = True
    t1.start()
    
    t2 = threading.Thread(target=dancing)
    # 设置守护线程 在start之前
    t2.daemon = True
    t2.start()
    
    # 等待所有线程完成 阻塞
    # t1.join()
    # t2.join()
    
    # 主线程
    time.sleep(2)
    print("主线程结束了")
    
    
    # 计算总耗时
    end_time = time.time()
    total_time = end_time - start_time
    print(f"多线程任务总耗时: {total_time:.2f} 秒")
