# 名片案例 business card case

# 1.打印名片
name = "张鹏华"
email = "zph@qq.com"
www = "www.zph.com"
qq = 1234
phone = 123456789
address = "北京市朝阳区"

# 打印电话号码
print("电话:%s" % phone)  # 字符串格式化输出
print("电话:%d" % phone)  # 整数格式化输出
print("电话:%f" % phone)  # 浮点数格式化输出

# 打印名片 
print("=========我的名片=========")
print(f"姓名：{name}")
print(f"邮箱：{email}")
print(f"网址：{www}")
print(f"Q  Q：{qq}")
print(f"电话：{phone}")
print(f"地址：{address}")
print("===========================")

#打印名片2
print("=========我的名片=========")
print("姓名：%s" % name)
print("邮箱：%s" % email)
print("网址：%s" % www)
print("Q  Q：%d" % qq)
print("电话：%d" % phone)
print("地址：%s" % address)
print("===========================")


