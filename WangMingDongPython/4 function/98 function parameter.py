## 函数的参数 parameters
# 允许定义多个同名的函数 但是不推荐!!!


def add(x, y):  # 形参
    return x + y


num1 = input("请输入第一个数字：")
num2 = input("请输入第二个数字：")

num3 = add(int(num1), int(num2))  # 实参

print("结果为：", num3)
