## 一个return返回多个值


def A():
    # return[1,2,3,4,5]
    # 简写
    return 1, 2, 3, 4, 5


# 返回的是元组,可以用解包的方式获取值
B = A()
print(B)
