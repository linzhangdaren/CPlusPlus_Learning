## 不定长参数   variable argument lists
# 接受带名字的参数需要用**kwargs字典类型


def test(a, b, aa=100, bb=200, *args, **kwargs):
    # def test(a, b, *args, **kwargs, aa=100, bb=200):#形参顺序决定传参顺序
    print(a)
    print(b)
    print(args)
    print(kwargs, type(kwargs))  # 字典类型


test(11, 22)  # {}

test(11, 22, dd=55)  # kwargs {'dd': 55}

# 原有的+args不带名字的多余参数+kwargs字典类型带名字的参数+带名字的参数
# 是按照以上的顺序传值的 对比如下:
# (a,b,*args,**kwargs,aa=100,bb=200)
# (a,b,aa=100,bb=200,*args,**kwargs)
# 一个在前一个在后 传递值的顺序也就不一样了!!!重要知识点
