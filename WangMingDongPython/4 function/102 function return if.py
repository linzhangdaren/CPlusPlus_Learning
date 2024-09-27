## 用if来判断返回哪个值


# 工资>5000交0.25的税,否则交0
def tex(salary):
    if salary > 5000:
        return salary * 0.25
    else:
        return 0

# 获取用户输入
input_salary = input("请输入您的工资：")

# 判断输入的是否是数字
if input_salary.isdigit():
    input_salary = int(input_salary)
    print("您要缴纳的税收为：", tex(input_salary))
else:
    print("输入的不是数字！")
