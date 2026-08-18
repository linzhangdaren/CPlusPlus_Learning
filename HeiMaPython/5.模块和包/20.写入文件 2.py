#文件的写入
lst=[
    "白日依山尽",
    "黄河入海流",
    "欲穷千里目",
    "更上一层楼"
]

file=open("20.abc.txt","w",encoding="utf-8")#文件名,写入模式,编码格式

# #整体写入列表
# file.writelines(lst)

#原列表+循环&回车拼接写入
for line in lst:
    file.write(line+"\n")
#推导式写法
# lst=[line+"\n" for line in lst]

#关闭文件
file.close()