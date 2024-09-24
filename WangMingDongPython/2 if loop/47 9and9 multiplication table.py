# 九九乘法表
# 先实现矩形

# 第一步 1-9隔行打印
# i = 1
# while i <= 9:
#     print(i)
#     print()
#     i += 1

# 第二步 穿插1 123456789 2 123456789 3 123...
# i = 1
# while i <= 9:
#     print(i)
#     print()
#     j = 1
#     while j <= 9:
#         print(j)
#         j += 1
#     print()
#     i += 1

# 第三步  print(j,end=" ")强制不换行
# i = 1
# while i <= 9:
#     print(i)
#     j = 1
#     while j <= 9:
#         print(j, end=" ")  # 不换行
#         j += 1
#     print()
#     i += 1

# 第三步
i = 1
while i <= 9:
    j = 1
    while j <= i:
        print("%d*%d=%d" % (j, i, i * j), end="\t")
        # 不换行 j根据i变化 end="\t" 制表符作用是对齐
        j += 1
    print()
    i += 1
