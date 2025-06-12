import time
import threading

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
    t1.start()
    t2 = threading.Thread(target=dancing)
    t2.start()
    
    # 等待所有线程完成 阻塞
    t1.join()
    t2.join()
    
    # 计算总耗时
    end_time = time.time()
    total_time = end_time - start_time
    print(f"多线程任务总耗时: {total_time:.2f} 秒")
