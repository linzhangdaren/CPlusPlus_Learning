# if elif score 分数判断

# if elif score 分数判断

try:
    score = input("请输入你的成绩：")
    score = int(score)  # 将输入转换为整数

    if 90 <= score <= 100:
        print("你的成绩优秀！")
    elif 80 <= score < 90:
        print("你的成绩良好！")
    elif 60 <= score < 80:
        print("你的成绩及格！")
    elif 0 <= score < 60:
        print("你的成绩不及格！")
    else:
        print("输入的成绩有误！成绩应在0到100之间。")
except ValueError:
    print("输入的成绩无效，请输入一个数字！")  # 处理非数字输入的情况


# 检查要点：
# 输入处理：程序未捕捉非数字字符的输入，在用户输入不合法时会导致程序崩溃。通过 try...except 块可以捕获 ValueError 并提示用户。
# 几乎重复的 int(score)：在多次使用 int(score) 转换值时，可以提前转换，并在后续逻辑中直接使用 score，提高了代码的可读性和效率。
