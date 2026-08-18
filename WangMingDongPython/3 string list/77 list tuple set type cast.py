# 列表 元组 集合的类型转换
# 关键字+小括号

nums1 = [1, 2, 3]  # 列表 list
nums2 = (4, 5, 6)  # 元组 tuple
nums3 = {7, 8, 9}  # 集合 set

# 列表转元组 num1转num2
tuple(nums1)  # tuple关键字+小括号，原数据不改变

# 列表转集合 num1转num3
set(nums1)  # set关键字+小括号

# 元组转列表 num2转num1
list(nums2)  # list关键字+小括号

# 元组转集合 num2转num3
set(nums2)  # set关键字+小括号

# 集合转列表 num3转num1
list(nums3)  # list关键字+小括号

# 集合转元组 num3转num2
tuple(nums3)  # tuple关键字+小括号
