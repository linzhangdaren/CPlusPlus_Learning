# if elif 判断输入的月份属于哪个季节

# 春季:3,4,5
# 夏季:6,7,8
# 秋季:9,10,11
# 冬季:12,1,2

month = input("请输入月份：")
month = int(month)  # 将输入的月份转换为整数
# 转换后如果输入的是abc乱码会崩溃
# 所以if判断的数值加引号保险"3" 但是写起来麻烦


# 方便写法 将输入的月份转换为整数
# month = int(input("请输入月份："))

if month == 3 or month == 4 or month == 5:
    print("春季")
elif month == 6 or month == 7 or month == 8:
    print("夏季")
elif month == 9 or month == 10 or month == 11:
    print("秋季")
elif month == 12 or month == 1 or month == 2:
    print("冬季")
else:
    print("输入月份错误")

# 可以用:参考36中的写法防止程序崩溃

# try:
# except ValueError:
# print("输入的成绩无效，请输入一个数字！")  # 处理非数字输入的情况
