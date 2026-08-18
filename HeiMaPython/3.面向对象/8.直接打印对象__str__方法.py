#默认参数缺省值 不用传参时，会使用默认值 不会报错 
class Person:
    def __init__(self, name="", age=0):
        self.name = name
        self.age = age
        print("初始化完成")#测试创造对象时候是否自动调用__init__
        
    def __str__(self):#注意是return 这样就可以直接打印对象了
        return f"姓名:{self.name};年龄:{self.age}"
        
#实例化对象
p1 = Person("张三")
#可以直接用__str__来打印对象 但需要提前在类里面写好
print(p1)#声明好str的后就可以直接打印对象了 不需要再写print(p1.name)了
