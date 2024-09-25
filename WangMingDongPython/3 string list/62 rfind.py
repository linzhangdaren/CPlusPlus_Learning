# rfind 完善查找后缀名 suffix expanded-name

# 从键盘获取文件名(后缀为.txt.mp3.mp4)如果是.png就打印可以
# 上传到网站,否则提示 不支持格式

file_name = input("请输入文件名:")
# file_name_end=file_name[-4:]#只能取4位太死板,不够灵活

dot_index = file_name.rfind(".")
# 从右边开始查找.的位置并返回.的下标值
print("dot_index:", dot_index)  # 输出点的下标
name_end = file_name[dot_index:]  # 取出后缀名
print("name_end:", name_end)  # 输出后缀名
