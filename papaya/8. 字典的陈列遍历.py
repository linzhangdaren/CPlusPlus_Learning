手机 = {
    "品牌": "小米",
    "型号": "xiaomi10",
    "Rom": "128G",
    "Ram": ["4G", "6G", "8G"],
}

# 遍历字典的key
print("遍历字典的key:")
for 参数 in 手机.keys():
    print(参数)
# 遍历字典的value
print
for 值 in 手机.values():
    print(值)
# 遍历字典的key-value
print("遍历字典的key-value:")
for 键, 值 in 手机.items():
    print(键, 值)
