#输入密码 判断是否有非法字符

password=input("请输入密码:")
#用一个字符串记录合法的字符
legal="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_"
for i in password:  #遍历字符串中的每一个字符
    if i not in legal:  #如果字符不在合法字符中
        print("密码中含有非法字符")
        break  #跳出循环
else:  #如果没有非法字符
    print("密码合法")