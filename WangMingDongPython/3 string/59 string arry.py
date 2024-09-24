# 字符串 下标

age = 30
wight = 90
web = "www.baidu.com"  #'' or ""or """ """or ''' '''or

for i in web:
    print(i)

name = "abcdefg"
print(name[0])  # a
print(name[-1])  # g带符号的意思是从左往右数，-1表示倒数的第一个元素
print(name[1:3])  # bc意思是从1开始到3结束，不包括3
print(name[1:])  # bcdefg意思是从1开始到最后
print(name[:3])  # abc意思是从0开始到3结束，不包括3
print(name[::2])  # aceg意思是从0开始到最后，步长为2
print(name[::-1])  # gfedcba意思是从0开始到最后，步长为-1
