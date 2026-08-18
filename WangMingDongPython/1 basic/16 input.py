# 获取数据 input()

print("请输入你的名字:", end=" ")  # 不换行输入
name = input()
print("1 你好," + name + "！")  # 1 你好,鹏华！
print(f"2 你好,{name}！")  # 2 你好, 鹏华 ！
print("3 你好,", name, "！")  # 3 你好, 鹏华 ！  逗号拼接输出拼接中间有空格

# 另一种方式直接input()
ID = input("请输入你ID:")  # 直接输入，都是str类型 需要%s输出
print("密码是，%s" % ID)  # 字符串格式化输出

print("name的数据类型是：", type(name))
print("ID的数据类型是：", type(ID))
print("321的数据类型是：", type(321))
