def add(a,b):
    return a+b

#上面的函数等同于下面的lambda表达式 也就是一行全包括了
add_lambda = lambda a,b:a+b

#+++++++++无参数lambda表达式+++++++++++++
def print_hello():
    print("Hello World!")

#等同于
say_hello = lambda:print("Hello World!")
