#不定长列表传参

scores = [80, 90, 70, 60]
print("解包",*scores)#列表打印不挂括号[]
print("列表",scores)

def average(*args):
    return sum(args)/len(args)
#*scores表示把scores这个列表解包成多个参数传给average函数
print(average(*scores))  # 75.0 
