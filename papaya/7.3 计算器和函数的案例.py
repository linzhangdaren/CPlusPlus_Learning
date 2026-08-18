def 加法(a, b):
    return a + b


def 减法(a, b):
    return a - b


def 乘法(a, b):
    return a * b


def 除法(a, b):
    return a / b


while True:
    计算类型 = input("请输入计算类型:1.加法 2.减法 3.乘法 4.除法: ")

    if 计算类型 in ("1", "2", "3", "4"):
        a = float(input("请输入第一个数字: "))
        b = float(input("请输入第二个数字: "))
        if 计算类型 == "1":
            print(f"{a}+{b}={加法(a,b)}")
        elif 计算类型 == "2":
            print(f"{a}-{b}={减法(a,b)}")
        elif 计算类型 == "3":
            print(f"{a}*{b}={乘法(a,b)}")
        elif 计算类型 == "4":
            print(f"{a}/{b}={除法(a,b)}")

    else:
        print("您输入有误，拜拜！")
        break
