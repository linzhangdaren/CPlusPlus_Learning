##
def test1(*args, **kwargs):
    print("----在test1函数中----")
    print("args:", args)  # 输出 args: ((11, 22, 33), {'name': '王老师', 'age': 18})
    print("kwargs", kwargs)  # 输出kwargs {}


def test2(*args, **kwargs):
    print("----在test2函数中----")
    print("args:", args)  # 输出 args: (11, 22, 33)
    print("kwargs", kwargs)  # 输出 kwargs {'name': '王老师', 'age': 18}
    test1(args, kwargs)
    # 因为 args和kwargs没有带星号* 没解包
    # 所以会被当做一个整体传入test1的*args
    # 所以test1函数中打印的args是
    # args: ((11, 22, 33), {'name': '王老师', 'age': 18})
    # kwargs: {}


test2(11, 22, 33, name="王老师", age=18)
