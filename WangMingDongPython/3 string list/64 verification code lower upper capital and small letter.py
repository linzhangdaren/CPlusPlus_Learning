# 验证码的大小写转换

# 用输入来判断循环与否
while 1:
    user_op = input("yes继续，no退出：")
    if user_op.lower() == "no":
        # 输入纯大写退出不了怎么办?NO no都让他退出
        # 用lower()或者upper()来转换验证码的大小写

        # no可以退出
        # NO也可以退出
        # No也可以退出
        # nO也可以退出

        # .lower()对应小写
        # upper()对应大写

        break
