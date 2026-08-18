# if demo(用Tab键截断if后面是否要输出的语句)

# 判断年龄
age = input("请输入你的年龄:")
if int(age) >= 18:#需要用int()将字符串转换为整数 这个很重要!
    print("恭喜你成年了!")
    print("你可以进去玩耍了!")
else:
    print("你还未成年，不能进入!")
