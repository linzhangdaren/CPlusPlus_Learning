# 列表 list
num = 100  # 一个
nums = [1, 2, 3, 4, 5, 3.14, "a"]  # 可以储存多种类型的元素比c++的数组强!
# 虽然可以储存多种数据类型 但是特别不建议!!!

# names = ["张鹏华", "刘娜妮"]  # ['张鹏华', '刘娜妮']
# print(nums)

# # 下标
# print(nums[0])  # 输出第一个元素
# print(nums[1])  # 输出第二个元素
# # print(nums[7])  # 不存在的元素(下标越界)会报错 IndexError: list index out of range

# # 列表切片 清除元素
# name = nums[0:2]  # [1, 2]
# print(name)  # 切片消除元素的列表
# print(nums)  # 原列表不变

# 列表遍历
# 1.直接遍历
# print(nums)#[1, 2]带着括号不美观

# # 2.for循环遍历
# for i in nums:
#     print(i)

# # 3.while循环遍历
# i = 0
# while i < len(nums):
#     print(nums[i])
#     i += 1
