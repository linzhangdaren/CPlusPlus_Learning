#文件的读取

#1. 打开文件(Windows默认GBK,Linux/MaxOS默认UTF-8)
f=open("19.abc.txt",encoding="utf-8")#或者GBK
#2. 读取文件
content=f.read()
print(content)#乱码
#3. 关闭文件
f.close()