"""
需求:
 用户输入整型变量a
 用户输入整型变量b
 计算a+b=?
"""
a=int(input("请输入a的值:"))
b=int(input("请输入b的值:"))
print("a+b=",a+b)#如果之前不int转换会成为字符串拼接 ,因为默认输入的都为字符串格式