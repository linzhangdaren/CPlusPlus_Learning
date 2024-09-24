# 使用break 让用户重复输入密码，如果重复3次，则退出程序。
i = 1
while i <= 3:
    name = input("请输入用户名：")
    password = int(input("请输入密码："))
    if password == 123456 and name == "张鹏华":
        print("登录成功！")
        break  # 登陆成功，退出循环
    else:
        print("登录失败！")
        print("您还有", 3 - i, "次机会")
    i += 1
