# if nest 嵌套的语法
a = 1
b = 2

if a > 0:
    if b > 0:
        print("a和b都大于0")
    else:
        print("a大于0,b小于等于0")
else:
    if b > 0:
        print("a小于等于0,b大于0")
    else:
        print("a和b都小于等于0")

