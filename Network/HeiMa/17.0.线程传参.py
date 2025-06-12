import threading
import time

def singing(name,age=18,score=100):
    for i in range(5):
        print(f"{name}正在唱歌,年龄{age},分数{score}")
        time.sleep(1)

if __name__ == '__main__':
    #1.元组传参
    t1=threading.Thread(target=singing,args=("张靓颖",19,99))
    t2=threading.Thread(target=singing,args=("王力宏",20,88))
    
    #2.字典传参
    #如果用kwargs就相当域字典了 这样可以随意传参不用在意顺序:
    # t1=threading.Thread(target=singing,kwargs={"name":"张靓颖","age":19,"score":99})
    # t2=threading.Thread(target=singing,kwargs={"name":"王力宏","age":20,"score":88})
    
    #3.元组+字典传参(元组和字典传参不能重复你135我246)
    # t1=threading.Thread(target=singing,args=("张靓颖",),kwargs={"age":19,"score":99})
    # t2=threading.Thread(target=singing,args=("王力宏",),kwargs={"age":20,"score":88})
    
    t1.start()
    t2.start()
    
    #阻塞
    t1.join()
    t2.join()
    
    print("唱完了")