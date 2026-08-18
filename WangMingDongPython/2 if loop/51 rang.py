# rang的几种使用方法
# 迭代的意义 :1.1版本1.2 原有的基础上衍生出下一个版本

# 1 range(x) #一个x就是从0开始到x-1结束的序列
# 2 range(x,y)#从x开始到y-1结束
# 3 range(x,y,z)#从x开始到y-1，步长为z +1 和+2的区别 奇数偶数

# 3 range(x,y,z)的使用方法
# 1. 打印10以内的偶数
for i in range(0, 11, 2):
    print(i, end=" ")
print()
# 2. 打印10以内的奇数
for i in range(1, 11, 2): #如果步长为负数需要注意逻辑 前大后小(10,0,-1)
    print(i, end=" ")
print()
