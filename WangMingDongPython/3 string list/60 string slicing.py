# 切片 string slicing

# 从键盘获取文件名(后缀为.txt.mp3.mp4)如果是.png就打印可以
# 上传到网站,否则提示 不支持格式

file_name = input("请输入文件名:")
if file_name[-4:] == ".png":
    print("可以上传")
else:
    print("不支持格式")
