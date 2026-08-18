## 匿名函数 lambda function
# 表达式默认有了一个return语句，所以不再写return语句
# 匿名函数只能有一个表达式

# 1.定义
# lambda 形参1,形参2,形参3...:表达式
lambda a, b: a + b
# # 等价于
# def add(a, b):
#     return a + b

# 2.使用
# 定义一个变量来指向匿名函数
add = lambda a, b: a + b

# 3.调用匿名函数
print(add(1, 2))  # 3

# 4.储存
a = add(1, 2)


# 5.当做实参
def fun(a, b, opt):
    print(a)
    print(b)
    print(opt(a, b))


fun(1, 2, lambda x, y: x + y)  # 给你参数给你方法 直接做

