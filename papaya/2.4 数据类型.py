# 数据类型有很多如:整数、浮点数、布尔值、字符串、列表、元组、字典等等
# 为什么有真么多数据类型呢?是为了节省空间 好比不能专门用一个房子来存放一根头发一样
# 一个格子一个标点,半个格子写一个偏旁,一个格子写一个字,一行写一句话...不能一张纸写一个字吧?

# 一个字节有8个比特位
# 整数占用4个字节,浮点数占用8个字节,布尔值占用1个字节,字符串占用n个字节(n是字符串的长度)
# 列表、元组、字典占用n个字节(n是列表、元组、字典的长度)
# 查询数据类型可以用type()函数
# 查询数据类型占用的字节数可以用sys.getsizeof()函数如:
import sys

print(sys.getsizeof(123))  # 输出4
print(sys.getsizeof(3.14))  # 输出8
print(sys.getsizeof(True))  # 输出1
print(sys.getsizeof("hello world"))  # 输出11
print(sys.getsizeof([1, 2, 3, 4, 5]))  # 输出28
print(sys.getsizeof((1, 2, 3, 4, 5)))  # 输出20
print(sys.getsizeof({"name": "Alice", "age": 25}))  # 输出48
print(sys.getsizeof("你"))  # 输出3
# 以上备注错误
