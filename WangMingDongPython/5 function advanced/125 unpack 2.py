
def test1(*args, **kwargs):
    print("----在test1函数中----")
    print("args:", args)  
    print("kwargs", kwargs)  


def test2(*args, **kwargs):
    print("----在test2函数中----")
    print("args:", args)  
    print("kwargs", kwargs)  
    test1(*args, **kwargs)



test2(11, 22, 33, name="王老师", age=18)
