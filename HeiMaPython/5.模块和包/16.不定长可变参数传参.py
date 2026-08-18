#使用方法:*args 代表元组不定长
#使用**kwargs 代表字典不定长
def sum_nums(*args):
    print(type(args))  # 输出参数的类型和内容
    print(args)  # 输出参数的类型和内容
    rst=0
    for i in args:
        rst+=i
    return rst

print(sum_nums(1,2,3,4,5)) #15