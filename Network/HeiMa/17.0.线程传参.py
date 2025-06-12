import threading
import time

def singing(name,age=18,score=100):
    for i in range(5):
        print(f"{name}正在唱歌,年龄{age},分数{score}")
        time.sleep(1)

if __name__ == '__main__':
    t1=threading.Thread(target=singing,args=("张靓颖",19,99))
    t2=threading.Thread(target=singing,args=("王力宏",20,88))
    t1.start()
    t2.start()
    
    #阻塞
    t1.join()
    t2.join()
    
    print("唱完了")