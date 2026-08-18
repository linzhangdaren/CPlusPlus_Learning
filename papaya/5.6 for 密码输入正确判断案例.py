正确密码 = "123456"
for 次数 in range(3):
    密码=input("请输入密码：")
    if 密码 == 正确密码:
        print("密码正确，进入系统")
        break
    else:
        print("密码错误，请重新输入")
        print("还剩",3-次数,"次机会")
else:
    print("三次密码错误，退出系统")