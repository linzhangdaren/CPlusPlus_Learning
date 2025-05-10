# 单行注释

"""
多行注释
"""

# 基本数据类型
int # 整数 123
float # 浮点数(小数) 3.1415926..
bool # 布尔 True False (1,0)
complex # 复数 1+2j

#高级数据类型
str # 字符串 'hello' "world" '''hello''' """world"""
list # 列表 [1,2,3,4,5] 可以修改 可以重复
tuple # 元组 (1,2,3,4,5) 不能修改
set # 集合 {1,2,3,4,5} 不能重复
dict # 字典 {'name':'张三','age':18} 键值对 可以修改 可以重复

#字符串拼接直接用,号隔开
print('hello','world') # hello world
print('hello'+'world') # helloworld
print('hello'*3) # hellohellohello

#数据类型的查看
print(type("你好")) # <class 'str'>
print(type(123)) # <class 'int'>
print(type(123.456)) # <class 'float'>
