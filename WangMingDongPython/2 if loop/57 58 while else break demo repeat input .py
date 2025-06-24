# while else配合使用的方式

# 基本方式的登录失败显示
# i = 1
# login_flag = False  # 登录状态 Ture 登录成功，False 登录失败
# while i <= 3:
#     name = input("请输入用户名：")
#     password = int(input("请输入密码："))
#     if password == 123456 and name == "鹏华":
#         print("登录成功！")
#         login_flag = True#登陆成功
#         break  # 登陆成功，退出循环
#     else:
#         print("登录失败！")
#         print("您还有", 3 - i, "次机会")
#     i += 1
# if login_flag==False:
#     print("登录失败，程序退出！")


# 另一种while else实现方式:
i = 1
while i <= 3:
    name = input("请输入用户名：")
    password = int(input("请输入密码："))
    if password == 123456 and name == "鹏华":
        print("登录成功！")
        break  # 登陆成功，退出循环
    else:
        print("登录失败！")
        print("您还有", 3 - i, "次机会")
    i += 1
else:
    #如果break没有执行，说明没有登录成功，执行else语句
    print("登录失败，程序退出！")
