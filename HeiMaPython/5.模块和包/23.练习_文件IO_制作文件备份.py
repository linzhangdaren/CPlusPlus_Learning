import os
#制作文件备份小练习

#1.输入文件名 b.py
#2.创建文件 文件名[复制].py-->b[复制].py
#3.读取文件,写入到复制文件中

#1.输入文件名+查找文件//////////////////////////////////////////
#file_name=None#可以先声明更加稳妥 这里先不用
while True:
    file_name=input("请输入文件名:")
    #判断文件是否存在,如果不存在重新输入
    if os.path.exists(file_name):
        break
    print(file_name,"文件不存在,请重新输入")
print("已找到",file_name)

#2.创建文件 文件名[复制].py-->b[复制].py/////////////////////////
#生成新的文件名
dot_index=file_name.rfind(".")#从右面找到点的索引值
file_name_prefix=file_name[:dot_index]#取出点之前的名字
file_name_suffix=file_name[dot_index:]#取出点之后的名字
new_file_name=file_name_prefix+"[复制]"+file_name_suffix#拼接新的文件名
print("新文件名:",new_file_name)

#读取源文件内容
with open(file_name,"r",encoding="utf-8") as f1:
    content=f1.read()
    #创建新文件(可以嵌套在读取源文件中)
with open(new_file_name,"w",encoding="utf-8") as f2:
    f2.write(content)



