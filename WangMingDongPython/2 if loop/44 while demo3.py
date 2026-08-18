# even number 被3整除和7整除的数之和
i = 1
sum = 0
while i <= 100:
    if i % 3 == 0 and i % 7 == 0:
        sum += i
    i += 1
print(sum)
