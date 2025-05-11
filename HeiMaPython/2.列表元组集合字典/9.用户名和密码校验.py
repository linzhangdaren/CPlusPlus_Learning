"""
用户名和密码格式校验程序
要求从键盘输入用户名和密码，分别校验格式是否符合规则
如果符合，打印用户名合法，密码合法
如果不符合，打印出不符合的原因，并提示重新输入

用户名长度6-20，用户名必须以字母开头
密码长度至少6位，不能为纯数字，不能有空格
"""
while True:#符合要求退出循环，不符合要求重新输入
    username=input("请输入用户名:")# for和while不会创造局部变量除非定义一个函数
    #用户名长度6-20，用户名必须以字母开头
    if len(username)>20 or len(username)<6:
        print("用户名长度不符合要求，请重新输入")
        continue
    elif not username[0].isalpha():
        print("用户名必须以字母开头，请重新输入")
        continue
    else:
        print("用户名格式合法")
        break
while True:#一直用if continue就可以 不用嵌套方便阅读
    password=input("请输入密码:")
    if len(password)<6:
        print("密码长度不符合要求")
        continue
    if password.isdecimal():
        print("密码不能为纯数字")
        continue
    if " " in password:
        print("密码不能有空格")
        continue
print("用户名:",username)
