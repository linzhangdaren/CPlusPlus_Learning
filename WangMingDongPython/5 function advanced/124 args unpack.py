## 一个星号的拆包
# 可以拆开 元组 列表 集合

def test(a, b, c):
    print(a + b + c)


nums = [1, 2, 3]
nums2 = (1, 2, 3)
nums3 = {1, 2, 3}
# 如何把nums列表中的元素作为参数传入test函数？
# 1. 逐个传入
# test(nums[0], nums[1], nums[2])  # 1 2 3
# 2.列表/元组/集合拆包解包
test(*nums)  # 1 2 3
test(*nums2)  # 1 2 3
test(*nums3)  # 1 2 3
