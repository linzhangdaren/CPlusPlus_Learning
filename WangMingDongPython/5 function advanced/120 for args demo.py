##遍历args元组进行运算


def sum_nums(a, b, *args):
    # 因为args是一个元组 所以要遍历 添加到sum_result中
    sum_result = a + b

    for temp in args:
        sum_result += temp

    print("结果是:%d" % sum_result)


sum_nums(1, 2, 3, 4, 5)
