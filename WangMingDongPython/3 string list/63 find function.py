# find从到右查找第一个匹配的子串的位置，如果没有找到，则返回-1。

a = "abc.txt.txt"
find_a = a.find(".")
print(find_a)  # 3 从左开始查找第一个.的位置

rfind_a = a.rfind(".")
print(rfind_a)  # 7 从右开始查找第一个.的位置

count_a = a.count(".")
print(count_a)  # 2 统计.的个数

replace_a = a.replace(".", "*")
print(replace_a)  # abc*txt*txt 所有.替换为*
print(a)  # abc*txt*txt# 原有a的格式不变

split_a = a.split(".")
print(split_a)  # ['abc', 'txt', 'txt'] 以.分割字符串 列表形式

startswith_a = a.startswith("abc")
print(startswith_a)  # True 查看字符串是否以abc开头

endswith_a = a.endswith("txt")
print(endswith_a)  # True 查看字符串是否以txt结尾

lower_a = a.lower()
print(lower_a)  # abc.txt.txt 大小写转换 转换为小写

upper_a = a.upper()
print(upper_a)  # ABC.TXT.TXT 大小写转换 转换为大写
