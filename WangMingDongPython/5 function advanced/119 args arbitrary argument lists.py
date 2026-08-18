##不定长参数
# arbitrary argument lists(任意参数列表) 或 variable argument lists(可变参数列表)
# 用*args表示不定长参数，可以存储多余的参数。


def sum_nums(a, b, *args):
    print("a", a)
    print("b", b)
    print("args", args, type(args))
    print("*args", *args, type(*args))  # 只能解1个元素

    # sum_result = a + b
    # print("结果是:%d" % sum_result)


# sum_nums(1, 2)
sum_nums(1, 2, 3)
sum_nums(1, 2, 3, 4, 5)

# a 1
# b 2
# args (3,)#为了避免运算符优先级问题，需要加逗号,
# *args 3

# args保存了多余3的值:(3,4,5)元组类型
# *args解包后，打印出来的是3，类型为int 只能解1个元素

# args是一个元组
# *args解包后，args中的元素会被打印出来
