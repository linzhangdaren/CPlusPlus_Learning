# if 条件成立
#     代码块1
# else
#     代码块2

a = 1
b = 2
if a == b:
    print("a等于b")
elif a > b:
    print("a大于b")
else:
    print("a小于b")

牛排 = 500
猪排 = 450
点餐 = input("请问您要点什么?A:牛排 B:猪排").upper()
if 点餐 == "A":
    print(f"您点的牛排价格为:{牛排}元")
else:
    print(f"您点的猪排价格为:{猪排}元")
