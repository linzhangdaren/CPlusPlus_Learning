# 累加 accumulate
# 顺序很重要不然会计算错误的


sum = 0
i = 1
while i <= 100:
    sum += i  # 0+1+2+3+...+100
    i += 1
    # i=2 3 4 5... 101 i<=100，循环结束不会累加101
    print(i)
print(sum)
