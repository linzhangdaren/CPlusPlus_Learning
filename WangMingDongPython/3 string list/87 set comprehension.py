# # 集合推导式  还是具有不可重复性
# nums = {x for x in range(1, 101)}  # 大括号就行
# print(nums)

nums = {100 for x in range(1, 101)}  # 大括号就行
print(nums)  # 输出{100} 去重了
