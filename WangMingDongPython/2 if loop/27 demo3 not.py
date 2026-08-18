# not 的应用 判断18-50岁的女性 然后取反
gender = "女"
age = 20

print("是否18-50岁的女性?")
print(age >= 18 and age <= 50 and gender == "女")
print()
print("取反:")
print(not (age >= 18 and age <= 50 and gender == "女"))
