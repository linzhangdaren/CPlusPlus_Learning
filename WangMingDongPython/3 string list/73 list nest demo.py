import random

# 应用 3个办公室 8个老师 随机分配

# 1.列表3个空列表offices = [[],[],[]]
# 2.另一个列表储存8个老师["老师1".."老师8"]
# 3.手#提取老师的数据放到offices里

# offices[0].append("老师1")


offices = [[], [], []]
teacher_names = ["老师1", "老师2", "老师3", "老师4", "老师5", "老师6", "老师7", "老师8"]

for name in teacher_names:
    # offices[0].append(name)
    random_office = random.randint(0, 2)  # 随机值付给变量random_office
    offices[random_office].append(name)  # 办公室  随机值 添加 name循环变量(i)
# print(offices)  # 输出办公室列表

# 遍历办公室列表，输每个办公室老师的数量
# ai写法
# for i in range(3):
#     print(
#         "办公室{}有{}个老师".format(i + 1, len(offices[i]))
#     )  # 输出每个办公室老师的数量

i = 1  # 第几个教室
for temp in offices:
    print("%d号办公室有%d个老师" % (i, len(temp)))
    i += 1  # 下一个办公室
   # 输出每个办公室老师的名字
    for name in temp:
        print(name)
