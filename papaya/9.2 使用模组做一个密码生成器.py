# 思路:先规定字母和数字
# 如:1234ABCD
# 用洗牌shuffle算法随机排列
# 再挑选需要前几位就可以了

# 导入random 模组
import random

# 导入数字表0-9和字母大小写表省的自己打了
import string

数字 = string.digits
英文字母 = string.ascii_letters
字母表 = 数字 + 英文字母
print(字母表)
# 输出:0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
# 需要把字母表转为清单
密码清单 = list(字母表)
# 洗牌
random.shuffle(密码清单)
# print(密码清单)  # 打乱后的密码清单

# 截取前几位密码
# 也可以自定义一个input让用户输入需要的位数
# 密码位数=int(input("请输入密码位数:"))
# 密码=密码清单[:密码位数]
密码 = 密码清单[:6]  # 截取前六位即可

print(密码)  # 输出密码
# 清单转字符串
字符串密码 = "".join(密码)
print(字符串密码)  # 输出密码

# 课程里有个导入天机查询的模组示范记得可以参考一下
