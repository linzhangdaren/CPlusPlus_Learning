# 三元运算符 ternary operator

# 三元运算符是一种简化的if-else语句，它由一个条件表达式、一个表达式和一个表达式组成。
# 三元运算符的语法是：
# max=a if a>b else b
# 其中，max是变量名，a和b是表达式，条件表达式是a>b。

# 举例：
a = 1
b = 2
max = a if a > b else b
print(max)  # 输出结果：2

# 支持嵌套使用：
a = 1
b = 2
c = 3
max = (a if a > b else b) if (a if a > b else b) > c else c
a = 1
b = 2
c = 3
# 拆解:
# max_value = a  # 假设 a 是最大值
# if b > max_value:
#     max_value = b
# if c > max_value:
#     max_value = c

# print(max_value)  # 输出结果：3
