##所有的=号都是引用 和c++不太一样 还需要&符号来传递引用
# 所有实参都是引用 Actual Parameters
def test(p):
    # 此时变量p也指向nums指向的列表
    p.append(44)
    print("在函数test中，p=", p)


nums = [11, 22, 33]
print("调用test函数之前，nums=", nums)
test(nums)  # 此时将列表的引用当做了实参进行传递
print("调用test函数之前，nums=", nums)

##函数名也是引用
# 可以同名函数不会报错
# 采用最下面的函数声明
# def test():
#     print("test函数")

# def test():
#     print("test函数2")
# 调用test()优先使用函数2

# 案例
# test()
# xxx = test
# test()
# xx()
