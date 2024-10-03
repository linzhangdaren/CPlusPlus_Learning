#   类型转换 (Type Casting)
# 1. 隐式转换 (Implicit Conversion) - 程序在不显式指定的情况下自动进行的转换。
# 2. 显式转换 (Explicit Conversion) - 程序员明确指示的转换。
# 3. 类型强制转换 (Type Coercion)

# 1. 隐式转换 (Implicit Conversion)
# 程序在不显式指定的情况下自动进行的转换。
# 整数到浮点数
A=10
B=3.14
C=A+B
print(C) # 13.14

# 2. 显式转换 (Explicit Conversion)
# 程序员明确指示的转换。
# 整数到字符串
A=10
B=str(A)
C=B+" is a string"
print(C) # 10 is a string

# 3. 类型强制转换 (Type Coercion)
# 强制将一种数据类型转换为另一种数据类型。
# 字符串到整数
A="10"
B=int(A)
C=B+1
print(C) # 11

