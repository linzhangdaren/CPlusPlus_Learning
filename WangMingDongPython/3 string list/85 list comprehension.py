# #列表推导式


## 格式
# [x for x in xxxx]

# deme: 20以内的偶数
nums = []
# for x in range(21):
#     if x % 2 == 0:
#         nums.append(x)
# print(nums)

# #列表推导式 压缩成一行而已
# nums = [x for x in range(21) if x % 2 == 0]

# nums = [x * 2 for x in range(21)]
# 每次1*2，2*2，3*2

# nums = [2 for x in range(21)]
# #2222222....(21个2)

## 其他课件里的说明

# range(3,4) #3到4-1，循环1次

# 列表里嵌套元组 
# for x in range(4):
#     for y in range(2)
# #和以下相等
# [(x,y)for x in range(4) for y in range(2)]#元组
# #(1,0)(1,1)...

print(nums)
