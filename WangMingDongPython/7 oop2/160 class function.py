##类方法 没创建对象之前是可以调用的
class Tool:
    num = 0  # 这个就叫类属性，共用同一份数据
    # 好比敌人数量可以控制难度级别超过多少后就不再增加敌人了

    def __init__(self, name):
        self.name = name
        # Tool.num += 1  # 类属性的初始
        # # 类属性使用时需要加类的名字
        self.add_1()  # 实例方法调用类方法

    @classmethod
    def add_1(cls):  # 类方法 cls代表类本身
        cls.num += 1  # 类方法，可以访问类属性

    @classmethod
    def print_object(cls):
        print("对象数量:%d" % cls.num)
        # 可以用Too.num但是类名如果不是Tool那就还得改cls是只类本身方便多了


tool1 = Tool("工具1")
tool2 = Tool("工具2")
tool3 = Tool("工具3")
# 输出类属性的值
print(Tool.num)  # 3
# 类方法调用
Tool.print_object()  # 输出工具数量3
# 对象方法调用类方法
tool1.print_object()  # 输出工具数量
