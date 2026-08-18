##双下划线的解读
# 私有属性的概念是把__name内部转换成了_Cat__name，所以外部代码不能直接访问私有属性，只能通过方法来访问。


class Cat:
    def __init__(self, name):
        self.__name = name

    def print_name(self):
        print(self.__name)


cat1 = Cat("汤姆")
cat1.print_name()  # 输出：汤姆
# 所有的私有只不过是障眼法
print(cat1._Cat__name)  # 这个才是真身可以访问可以修改

#########################################################
cat1.__name = "小猫"  # 直接修改属性会报错 cat1.__name 创建了一个新的属性，而不是修改原有的私有属性
print(cat1.__name)
# 将打印“小猫”，而不是“汤姆”，因为它访问的是新创建的属性，而不是原始的私有属性
