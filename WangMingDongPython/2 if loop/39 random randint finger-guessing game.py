# 猜拳游戏 电脑随机值random.randint(0, 2)
import random


pc = 0
user = 0

user = int(input("请输入0(石头)、1(剪刀)、2(布)："))
pc = random.randint(0, 2)
if user == pc:
    print("平局")
elif (user == 0 and pc == 2) or (user == 1 and pc == 0) or (user == 2 and pc == 1):
    print("你输了")
else:
    print("你赢了")
