## 默认参数 也叫缺省参数 default parameters


def print_myself(name, school="临漳县第一中学", age=18):
    print("大家好，我是%s,我在%s上学,今年%d岁了。" % (name, school, age))
    # 如果没有传入school参数，则使用默认值"临漳县第一中学"
    # 如果没有传入age参数，则使用默认值18


print_myself("王明", age=19)  # 省略中间,就用age=19指定一下
