#异常捕获
a=10
b=int(input("请输入b的值:"))

try:
    c=a/b
    print("结果为:",c)
except ZeroDivisionError as error:#可以不as error
    #可以不写ZeroDivisionError as e 只不过没办法打印了 
    # 可以把终端报错复制到这里即可查看
    print("错误信息:",error)
    print("除数不能为0")
    
