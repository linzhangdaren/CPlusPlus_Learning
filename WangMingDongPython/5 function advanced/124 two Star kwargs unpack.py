## 字典的二星拆包


def test(a, b, c):
    # 虽然接受了test(a="1", b="2", c="3")
    # 但是如果形参名字一改变，就会报错
    print(a)
    print(b)
    print(c)


info = {"a": 1, "b": 2, "c": 3}


test(**info)
# 相当于命名参数 传给函数test
# test(a="1", b="2", c="3")
