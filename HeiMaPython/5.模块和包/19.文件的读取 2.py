#文件的读取

#1. 打开文件(Windows默认GBK,Linux/MaxOS默认UTF-8)
f=open("19.abc.txt",encoding="utf-8")#或者GBK

#2. 读取文件
# #读取指定个数的字符
# content=f.read(3)#只读3个字符不是字符按照编码来分块的
# print(content,end="")#不换行打印end=""

# #读取一行 #按照之前读取的结尾作为开始
# line=f.readline()
# print(line,end="")

#读取所有行 文字多再用 慎用以为内占用内存多 如果用单行去循环输出只会占用一点内存
lines=f.readlines()
print(lines)

#3. 关闭文件
f.close()