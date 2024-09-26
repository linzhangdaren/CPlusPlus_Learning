# 字典的增删改查

teacher_wang = {
    "name": "王老师",
    "age": 18,
    "home": "山东青岛",
    "web_site": "www.baidu.com",
}

# # 1.增
# # 增加一个不存在的键值对 Key 和 value
# teacher_wang["weixin"] = "123456"
# print(teacher_wang)

# # 2.清空&删除
# # 删除某个键值对
# del teacher_wang["age"]
# print(teacher_wang)
# # 清空整个字典 注意并不是删除
# teacher_wang.clear()
# print(teacher_wang)
# # 删除
# # del teacher_wang  # 删除就打印不出来了

# # 3.改
# teacher_wang["age"] = 20#直接赋值相当方便
# print(teacher_wang)

# #查
# print(teacher_wang["name"])  # 如果不存在就崩溃
# 保险起见的查询用.get()方法，如果不存在就返回None,存在就返回真值
# print(teacher_wang.get("weixin"))  # 如果不存在就返回None
# print(teacher_wang.get("weixin", "不存在"))  # 自定义返回空值的字符提示:不存在
