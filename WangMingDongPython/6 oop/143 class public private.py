## 类的私有属性和公共属性class public private in Python

# self.__name=xxx # private variable
# self.name=xxx # public variable


class Cat:
    def __init__(self, name, age):
        self.__name = name  # private variable
        self.age = age  # public variable

    def get_name_age(self):
        print("我是%s，今年%d岁。" % (self.__name, self.age))

    # def set_name(self, name):  # 通过方法修改私有属性
    #     self.__name = name  # private variable


cat = Cat("小白", 1)
cat.get_name_age()  # 我是小白，今年1岁。


# 无法直接修改私有属性了
cat.__name = "小黑" #还可以赋值 这是为啥?
print(cat.__name)  # 输出小黑 这是为啥?

cat.get_name_age()  # 又输出小白。