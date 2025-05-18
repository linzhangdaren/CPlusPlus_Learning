#可以用一个函数来调用类里的方法
#动态类型语言
class Dog():
    def 吃(self):
        print('狗吃骨头')
    def 跑(self):
        print('狗跑')

def 某个动物吃(鸭子):
    鸭子.吃()
    鸭子.跑()
    
狗=Dog()
某个动物吃(狗)