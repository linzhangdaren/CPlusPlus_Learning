# 集合 set不能重复的元素。
# 去重
nums1 = [1, 2, 3]  # 列表
nums2 = (4, 5, 6)  # 元组
nums3 = {7, 8, 9}  # 集合

# 输出类型关键字type()
print(type(nums1))  # <class 'list'>
print(type(nums2))  # <class 'tuple'>
print(type(nums3))  # <class'set'>

nums4 = {11, 22, 11, 33, 44, 33}
print(nums4)  # {11, 22, 33, 44} 去掉了重复的元素
