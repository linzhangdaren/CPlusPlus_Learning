#直接输出range()函数的结果，得到的是一个range对象，而不是列表。
a=range(10)
print(a,type(a))

#如果想输出range对象的内容，可以使用list()函数将其转换为列表。
b=list(range(10))
print(b,type(b))

#或者for循环遍历range对象中的元素。
for i in range(10):
    print(i,end=" ")
print()

#range()有三个参数，分别是start、stop和step。
#start表示为什么开始，默认为0；
#stop表示到什么结束，不包含stop；
#step表示步长，默认为1 
# 如果想打印倒序的话,步长改为-1 
# 如:range(10,0,-1) 输出10 9 8 7 6 5 4 3 2 1
for i in range(10,0,-1):
    print(i,end=" ")