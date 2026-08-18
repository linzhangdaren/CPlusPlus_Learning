#Tkinter GUI编程(2)

import tkinter as tk

#创建窗口
a1 = tk.Tk()
#设置窗口标题
a1.title("练习题2")

#设置窗口大小和位置
a1.geometry("150x300+500+300") #长x宽+x+y 后两个参数为窗口位置
#获取用户分辨率



#开启窗口事件循环 一般写在最后面
a1.mainloop()