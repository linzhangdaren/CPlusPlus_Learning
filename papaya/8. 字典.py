# 字典的格式 item Key:Value
# 创建字典
手机 = {
    "品牌": "小米",
    "型号": "xiaomi10",
    "Rom": "128G",
    "Ram": "8G",
}

print(手机["Rom"])
# 如果查询的Key不存在，会报错KeyError: '键不存在'
# 所以可以用get方法来避免KeyError
print(
    手机.get("颜色", "未知")
)  # 第二个值未知是指如果差不到会返回什么样的值 会返回"未知"这个值

# 或者用if in来判断Key是否存在
if "颜色" in 手机:
    print(手机["颜色"])
else:
    print("颜色未知")
