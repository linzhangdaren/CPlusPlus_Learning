# 解包
# #和推导式反着来 快速分解
# nums=[1,2,3,4,5]
# a,b,c,d,e=nums#数量一定要对应上
# print(a,b,c,d,e)

# #右面可以放列表
# a,b,c=[1,2,3]
# print(a,b,c)

# 字典的解包1
test_dict = {"姓名": "张鹏华", "年龄": 25, "性别": "男"}
# name, age, gender = test_dict.values()
# print(name, age, gender)#张鹏华 25 男

# 字典的解包2 用.items()方法
name, age, gender = test_dict.items()  # ('姓名', '张鹏华') ('年龄', 25) ('性别', '男')
print(name, age, gender)

# 字典的解包3 用for
for k, v in test_dict.items():
    print(k, v)  # 姓名 张鹏华 年龄 25 性别 男
