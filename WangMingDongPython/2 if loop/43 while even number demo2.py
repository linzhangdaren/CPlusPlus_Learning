# even number 偶数累加
# i = 1
# sum = 0
# while i <= 100:
#     if i % 2 == 0:
#         sum += i
#     i += 1
# print(sum)

# 偶数的累加和
i = 1
sum = 0
while i <= 100:
    if i % 2 == 1:  # 或者 if not(i % 2 == 0)
        sum += i
    i += 1
print(sum)
