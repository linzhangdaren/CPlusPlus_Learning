## 星号*解包传参


def test(a, b, c):
    print(a + b + c)


nums = [1, 2, 3]
# 如何把nums列表中的元素作为参数传入test函数？
#1. 逐个传入
test(nums[0], nums[1], nums[2])  # 1 2 3
#2. 列表解包    
test(*nums)  # 1 2 3
