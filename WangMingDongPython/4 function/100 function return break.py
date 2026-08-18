## return 在函数中也可以起到break打断结束函数的作用


def print_info():
    print("1")
    return
    print("2")  # 这里的return 语句会直接结束函数的执行，后面的语句不会被执行


print_info()  # 输出 1
