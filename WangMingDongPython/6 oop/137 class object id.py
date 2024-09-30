## 新旧类


# 以下写法在python3中新旧都一样
class Dog1:  # 经典类
    pass


class Dog2(object):  # 新式类 继承 python2中就得这样写
    pass


dog1 = Dog1()  # 经典类
dog2 = Dog2()  # 新式类

# 输出地址
print(id(dog1))
print(id(dog2))

dog3 = Dog1()
print(id(dog3))
# 虽然是Dog1类和dog1对象看似一样
# 但是地址是不同的类创建出来的对象是个例的
