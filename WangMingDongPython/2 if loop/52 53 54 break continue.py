# break 结束整个循环
# continue 跳过当前循环，继续下一次循环

# for i in range(10):
#     if i == 5:
#         break
#     print(i)

for i in range(10+1):
    if i % 2 == 0:
        continue
    print(i)
