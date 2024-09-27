#用拆包来交换两个变量的值

# #原始案例
# a = 10
# b = 20
# c=a
# a=b
# b=c
# print("a =",a)
# print("b =",b)

#拆包案例
a = 10
b = 20
a,b = b,a
print("a =",a)