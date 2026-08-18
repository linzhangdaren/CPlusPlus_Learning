#私有化属性简单案例
class Person:
    def __init__(self,name,age):
        self.name=name
        self.__age=age#__age是私有属性，只能在类的内部使用，外部无法访问
    def print_age(self):
        print(f"年龄是:{self.__age}")

#创建一个Person对象
p=Person("Tom",18)
print(p.name)#Tom 可以访问到name属性
# print(p.__age)#报错，外部无法访问到__age私有属性
p.print_age()#年龄是:18 print_age()是类里的一个方法，所以可以访问到__age私有属性