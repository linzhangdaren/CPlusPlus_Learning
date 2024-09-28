##局部变量和全局变量local global variable
##局部变量修改全局变量使用关键字 global+全局变量名=赋值
##全局变量用纯大写+下划线

# #1.全局变量
# X=1

# def a():
#     print(X)

# def b():
#     X=2
#     print(X)
##在函数外部定义的变量叫全局变量 全局通用

# #2.局部变量
# def a():
#     x=1

# def b():
#     print(x)
##定义在函数中的变量是局部变量,无法相互调用
##无法直接修改全局变量的值

##3 局部变量修改全局变量的值用global关键字
# def c():
#     global X=3
#     print(X)#3
