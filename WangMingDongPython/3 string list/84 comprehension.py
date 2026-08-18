# 推导式comprehension 快速生成数据
# 生成13579...99

nums = []  # 定义一个空列表

# # 土办法:
# for i in range(100):
#     if i % 2 != 0:
#         nums.append(i)  # 将0-99的数字依次添加到列表中
# print(nums)


# 推导式一行代码生成13579...99
# 1. 列表推导式 []
# nums = [i for i in range(100) if i % 2 != 0]
# 2.集合推导式 {}
# nums = {i for i in range(100) if i % 2 != 0}
# 3.字典推导式 {i:}
# nums = {i: i for i in range(100) if i % 2 != 0}
##注意:没有元组推导式

print(nums)
