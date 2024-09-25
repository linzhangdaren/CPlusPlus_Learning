# sort list 列表排序

# sort 升序排序
name1 = [1, 3, 2, 4, 5, 33, 22, 11]
name1.sort()
print(name1)  # [1, 2, 3, 4, 5, 11, 22, 33]

# sort 降序排序
name1.sort(reverse=True)
print(name1)  # [33, 22, 11, 5, 4, 3, 2, 1]


# reverse 单独使用是对原列表进行反转，而不是对排序后的列表进行反转
name1.reverse()
print(name1)  # [33, 22, 11, 5, 4, 3, 2, 1]
name1.reverse()
print(name1)  # [33, 22, 11, 5, 4, 3, 2, 1]
