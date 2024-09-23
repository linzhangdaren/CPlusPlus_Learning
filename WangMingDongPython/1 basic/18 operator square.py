# 运算符 operator

# 加减乘除 = - * /
age = 20
age += 1  # age = age + 1 复合赋值运算符


# *号
# 可以用来重复字符串或列表
add = "1" * 2  # "11" 1为字符串，2为整数，表示重复2次的1
# 可以用来做"----------------"的分隔符 如:
分隔符 = "-" * 20
print(分隔符)  # --------------------
print("Hello, world!")
print(分隔符)  # --------------------

# /号
# 除法运算符，返回浮点数结果
result = 10 / 3  # 3.3333333333333335
print("result的类型是:", type(result))  # result的类型是: <class 'float'>

# //号 取商
# 整除运算符，返回整数结果 去掉了小数部分
result = 5 // 2  # 2去掉了2.5的0.5
print("result的类型是:", type(result))  # result的类型是: <class 'int'>

# %号 取余
# 取余运算符，返回除法的余数
result = 5 % 2  # 1
print("result的类型是:", type(result))  # result的类型是: <class 'int'>

# **号 乘方 次方
# 乘方运算符，返回x的y次方
result = 2**3  # 8
print("result的类型是:", type(result))  # result的类型是: <class 'int'>
