# 字符串 下标

age = 30
wight = 90
web = "www.baidu.com"

for i in web:
    print(i)

name = "abcdefg"

# 输出字符串的第一个字符
print(name[0])  # 输出 a

# 输出字符串的最后一个字符
print(name[-1])  # 输出 g

# 输出字符串倒数第二个字符
print(name[-2])  # 输出 f

# 输出从开始到倒数第一个字符（不包含倒数第一个字符）
print(name[:-1])  # 输出 abcdef

# 输出从索引1到索引3（不包含索引3）的字符
print(name[1:3])  # 输出 bc

# 输出从索引1到字符串的最后一个字符
print(name[1:])  # 输出 bcdefg

# 输出从开始到索引3（不包含索引3）的字符
print(name[:3])  # 输出 abc

# 每隔一个字符取一个，输出偶数索引的字符
print(name[::2])  # 输出 aceg

# 反转字符串，从最后到开始输出
print(name[::-1])  # 输出 gfedcba
