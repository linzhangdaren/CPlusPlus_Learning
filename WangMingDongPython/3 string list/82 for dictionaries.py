# #遍历字典 顺序也是无序的

# # 复习元组列表集合的遍历
# nums1 = [1, 2, 3, 4, 5]  # 列表
# nums2 = (6, 7, 8, 9, 10)  # 元组
# nums3 = {11, 12, 13, 14, 15}  # 集合 输出的顺序是不确定的
# for temp in nums1:  # nums1, nums2, nums3都可以
#     print(temp)

## 遍历字典
class_info = {
    "name": "三年二班",
    "teacher": "王老师",
    "student_num": 10,
}

# #按照逻辑循环遍历 但是只会输出key
# for temp in class_info:
#     print(temp)# 输出name, teacher, student_num


# #正确的遍历字典方法

# # 1. 加.values()
# for temp in class_info.values():
#     print(temp)  # 输出 三年二班, 王老师, 10

# # 2. 加.keys() 和默认一样输出key
# for temp in class_info.keys():
#     print(temp)  # 输出name, teacher, student_num


# 3. 加.items() 输出key和value 整体输出只不过是元组类型的
for temp in class_info.items():
    print(temp)  # 输出('name', '三年二班'), ('teacher', '王老师'), ('student_num', 10)
    # %s输出
    print(
        "%s:%s"
        # temp[0] 代表键（key），temp[1] 代表值（value）
        % (temp[0], temp[1])
    )  # 输出name:三年二班, teacher:王老师, student_num:10
