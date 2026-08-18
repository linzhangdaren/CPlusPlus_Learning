# # 1. 输入天数转换为星期
# days = int(input("请输入天数："))
# week = days // 7  # 计算出有多少个星期
# left_day = days % 7  # 计算剩余的天数
# print("您输入的天数为:%d天,合%d个星期零%d天" % (days, week, left_day))

# # 2. 输入华氏度转换为摄氏度
fahrenheit = None  # 华氏度
celsius = None  # 摄氏度


# 获取用户输入的华氏温度，并转换为浮点数以支持小数输入
fahrenheit = float(input("请输入华氏度："))

# 使用公式将华氏温度转换为摄氏温度
celsius = 5.0 / 9 * (fahrenheit - 32)

# 输出转换结果，保留两位小数
print("您输入的华氏度为：%.2f, 转为摄氏度为:%.2f" % (fahrenheit, celsius))
