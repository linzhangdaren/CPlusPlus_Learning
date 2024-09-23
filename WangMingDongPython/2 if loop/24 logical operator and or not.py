# 逻辑运算符 与或非 and or not

# 与运算符：and 语法：a and b
# 两个操作数都为真，结果才为真。

a = True
b = False
c = a and b

print(c)  # False
print(a and b)  # False

print(True and True)  # True
print(False and False)  # False

print(100 < 200 and 200 < 300)  # True
print(100 < 200 and 300 < 200)  # False

# 或运算符：or 语法：a or b
# 两个操作数有一个为真，结果就为真。

a = True
b = False
c = a or b

print(c)  # True
print(a or b)  # True

print(True or False)  # True
print(False or False)  # False

print(100 < 200 or 200 > 300)  # True
print(100 > 200 or 200 > 300)  # False

# 非运算符：not 语法：not a
# 取反运算，如果a为真，则结果为假，如果a为假，则结果为真。
a = True
b = not a
print(a)  # True
print(not a)  # False
print(b)  # False

print(100 < 200)  # True
print(not 100 < 200)  # False 如果怕错，可以加括号
print(not (100 < 200))  # False
