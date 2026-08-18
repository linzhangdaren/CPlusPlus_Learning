# 列表的嵌套 list nest 二维数组

list1 = [1, 2, 3]
list2 = [4, 5, 6]

list3 = [list1, list2]  # 列表的嵌套
print(list3)  # [[1, 2, 3], [4, 5, 6]]
print(len(list3))  # 2个元素

print(list3[0])  # [1, 2, 3]
print(list3[1])  # [4, 5, 6]

print(list3[0][0])  # 1 第一个列表的第一个元素
print(list3[0][1])  # 2 第一个列表的第二个元素
print(list3[0][2])  # 3 第一个列表的第三个元素

print(list3[1][0])  # 4 第二个列表的第一个元素
print(list3[1][1])  # 5 第二个列表的第二个元素
print(list3[1][2])  # 6 第二个列表的第三个元素
