#文件的写入
lst=[
    "白日依山尽",
    "黄河入海流",
    "欲穷千里目",
    "更上一层楼"
]

with open("20.abc.txt","w",encoding="utf-8")as file:
#采用with 及时出现异常也能关闭文件 只要是I/O都可以使用with

    # #整体写入列表
    # file.writelines(lst)

    #原列表+循环&回车拼接写入
    for line in lst:
        file.write(line+"\n")
    #推导式写法
    # lst=[line+"\n" for line in lst]
    
    #异常错误/即使出现错误提示报错 文件也写入正常关闭了
    a=1/0
