# 列表推导式案例
# [123..100]  变成 [[123][456]...]

nums = [x for x in range(1, 101)]
# print(nums)  # 1-100

# # 切片 思路1步
# print(nums[0:3])
# print(nums[3:6])
# print(nums[6:9])

# # 切片 思路2步
# nums2=[x for x in range(0,len(nums),3)]


## 思路3步
nums2 = [nums[x : x + 3] for x in range(0, len(nums), 3)]
print(nums2)
# nums[x:x+3] 第一次循环，取nums[0:3]，下标0是1 1是2 2是3 所以是[123]
