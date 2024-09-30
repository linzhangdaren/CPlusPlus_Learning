##类属性  对象共享的一个类的属性
# 每次创建对象不初始化

##案例:
# class Tool:
#     def __init__(self, name):
#         self.name = name
#         self.num = 0
#         self.num += 1
#
#
# tool1 = Tool("工具1")
# tool2 = Tool("工具2")
# tool3 = Tool("工具3")
# # 此方法无法记录工具的数量因为每次创建对象时num都会被初始化为0


# 如何让实例对象共用一个属性呢？
class Tool:
    num = 0  # 这个就叫类属性，共用同一份数据
    # 好比敌人数量可以控制难度级别超过多少后就不再增加敌人了

    def __init__(self, name):
        self.name = name
        Tool.num += 1  # 类属性的初始
        # 类属性使用时需要加类的名字


tool1 = Tool("工具1")
tool2 = Tool("工具2")
tool3 = Tool("工具3")
# 输出类属性的值
print(Tool.num)  # 3
