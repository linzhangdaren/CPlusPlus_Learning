#可以解包整理杂乱数据

def milk_tea_shop(model, *args, **kwargs):
    # print("型号:",model)
    # print("配料:",args)
    # print("价格:",kwargs["price"])
    # print("地址:",kwargs["address"])
    # print("电话:",kwargs["phone"])
#循环写法///////////////////
    for arg in args:
        print(arg)
    print("-" * 20)
    for key, value in kwargs.items():
        print(key, ":", value)


milk_tea_shop(
"超级雪王奶咖",
"加糖","少冰","半糖","加珍珠",
price="10元",address="北京",
phone="10010"
)