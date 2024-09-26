# 字典 dictionaries
# 为了防止列表增删改以后下标混乱 原有下标做废的情况

# 场景1
names = ["Alice", "Bob", "Charlie"]
names.insert(0, "David")
print(names[0])  # 当初的0是Alice 现在David在0位置 下标已错乱

# 场景2
stu = [[12, "张鹏华"], [13, "李红"], [14, "王帅"]]
print(stu[0][0])  # 如果添加一个元素将不在输出原有信息了
