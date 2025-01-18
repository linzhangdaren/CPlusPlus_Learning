print(type(123))  # int整数类型
print(type(3.14))  # float浮点数类型
print(type("hello"))  # str字符串类型
print(type(True))  # bool布尔类型
print(type(None))  # None空类型
print(type(abs))  # function函数类型
print(type(print))  # function函数类型
print(type([1, 2, 3]))  # list列表类型
print(type((1, 2, 3)))  # tuple元组类型
print(type({"name": "Alice", "age": 20}))  # dict字典类型
print(type({"name": "Alice", "age": 20}.keys()))  # dict_keys字典键视图类型
print(type({"name": "Alice", "age": 20}.values()))  # dict_values字典值视图类型
print(type({"name": "Alice", "age": 20}.items()))  # dict_items字典项视图类型


# str字符串单引号和双引号的使用
# 当内容中有单引号那么外面需要用双引号，反之亦然。
print("你是'小明'吗？")
print('我不是"小明"')

# str字符串多行输出需要用三个单引号或者三个双引号
print(
    """
      你好
      我是
      小明
      """
)
