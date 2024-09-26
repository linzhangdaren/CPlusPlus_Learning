# 列表转换快速去重
nums1 = [1, 2, 1, 3, 2, 4, 3, 5]
set1 = set(nums1)  # 去重
nums2 = list(set1)  # 转换为列表
print(nums2)  # [1, 2, 3, 4, 5]
# 如果是c++就得遍历 if判断 很麻烦
