#使用方法:*args 代表不定长参数，args是一个tuple，可以接收任意多个参数，参数会以tuple的形式传入。
def sum_nums(*args):
    print(type(args))  # 输出参数的类型和内容
    print(args)  # 输出参数的类型和内容
    rst=0
    for i in args:
        rst+=i
    return rst

print(sum_nums(1,2,3,4,5)) #15