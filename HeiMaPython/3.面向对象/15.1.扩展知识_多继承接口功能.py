#多继承 就是接口功能 插上只翅膀飞
#接口:interface  是一种规范  是一种约定
#class 子类(父类1,父类2,....):


#接口 功能 写法是一样的类的写法
class 飞翔能力:
    def 飞翔(self):
        print(self.name+"在飞翔")
    
#动物类
class 动物类:
    def __init__(self,name):
        self.name=name
    def 吃饭(self):
        print(self.name+"在吃饭")
    def 睡觉(self):
        print(self.name+"在睡觉")
#继承       
class 鸭子类(动物类,飞翔能力):#如果父类有相同方法名  会采用第一个父类的方法
    def __init__(self,name):
        super().__init__(name)
        
        
        

    
        
        
唐老鸭=鸭子类("唐老鸭")
唐老鸭.吃饭()
唐老鸭.睡觉()
唐老鸭.飞翔()
