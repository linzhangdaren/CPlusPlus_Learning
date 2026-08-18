# dictionaries 字典格式 {}还是大括号和集合set一样的
# key和value(键值对)一个是键，一个是值，键必须是唯一的，值可以重复

# 为了区分集合和字典需要编写时做到以下:
blank_set = {}  # 空集合
blank_dict = {}  # 空字典

# 1. 字典的创建
# 集合是这种格式{1,2,3}
# 字典的格式为{key1:value1, key2:value2}key和value可以放任何类型
my_info = {"name": "鹏华", "web_site": "xxx.com", "微信": "123456"}
# 上面真正的数据是"鹏华","xxx.com","123456"

# 2. 字典的提取
# 这种字典的类型提取数据不能再用下标了，只能用key来提取数据
print(my_info["name"])  # 鹏华
print(my_info["web_site"])  # xxx.com
print(my_info["微信"])  # 123456

