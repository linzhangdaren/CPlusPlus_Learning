# 删 list 元素

# 1. del 直接删除元素
name1 = ["a", "b", "c"]
del name1[1]  # 删除下标为1的元素
print(name1)  # 输出结果：['a', 'c']

# 2. pop() 删除最后一个元素 类似剪切
name2 = ["a", "b", "c"]
name2.pop()  # 删除最后一个元素 
print(name2)  # 输出结果：['a', 'b']

# 3. remove() 删除指定元素
name3 = ["a", "b", "c", "b"]
name3.remove("b")  # 删除元素"b"
print(name3)  # 输出结果：['a', 'c', 'b']

