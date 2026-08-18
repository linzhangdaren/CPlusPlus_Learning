# #while nest 循环嵌套
# 用循环实现以下
# print("哈喽你好")
# print("你也好")
# print("拜拜")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")

# print("哈喽你好")
# print("你也好")
# print("拜拜")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")

# print("哈喽你好")
# print("你也好")
# print("拜拜")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")
# print("哈哈哈")


# while 循环嵌套
# 用循环实现以下

i = 1
while i <= 3:  # 外层循环控制三次的整体输出
    print("哈喽你好")
    print("你也好")
    print("拜拜")

    j = 1
    while j <= 5:  # 内层循环控制“哈哈哈”的输出
        print("哈哈哈")
        j += 1

    print()  # 输出一个空行以分隔每组的输出
    i += 1  # 外层循环的计数器递增
