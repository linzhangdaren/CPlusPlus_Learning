def show_info(**kwargs):
    print(kwargs)
stu={
    "name":"张三",
    "age":18,
}
show_info(**stu)#等同于show_info(name="张三",age=18)