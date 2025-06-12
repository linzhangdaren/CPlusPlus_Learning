#单任务
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
    #记录时间
    start_time = time.time()
    
    #唱歌       
    singing()
    #跳舞
    dancing()
    
    #记录时间
    end_time = time.time()
    #计算时间差
    print("总共耗时：", end_time - start_time, "秒")