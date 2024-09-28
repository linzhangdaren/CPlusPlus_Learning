##函数的返回值拆包
def get_my_info():
    high = 180
    weight = 70
    age = 25
    return high, weight, age  # 默认元组


ret = get_my_info()
print(ret)  # (180, 70, 25)

high, weight, age = get_my_info()
print(high)
print(weight)
print(age)  # 180 70 25
