
from PySide6.QtWidgets import QApplication, QWidget,QVBoxLayout
from PySide6.QtWidgets import QPushButton,QHBoxLayout
import sys



def input_box(window):
    #排版 竖直垂直排列 V=Vertical H=Horizontal
    layout=QHBoxLayout()#创建水平布局 QH改为QV就是水平的了如下:
    # layout=QVBoxLayout()#创建垂直布局    
    window.setLayout(layout) #把layout添加到窗口 
    
    #创建按钮
    btn1=QPushButton("按钮1")
    btn2=QPushButton("按钮2")
    btn3=QPushButton("按钮3")
    btn4=QPushButton("按钮4")
    #添加按钮到布局
    layout.addWidget(btn1)
    layout.addWidget(btn2)
    layout.addWidget(btn3)
    layout.addWidget(btn4)
 

    
    
    
    
if __name__ == '__main__':
    
    #创建应用程序
    app = QApplication(sys.argv)
    #创建窗口
    window = QWidget()
    #设置窗口大小
    window.resize(400, 300)

    #设置标题
    window.setWindowTitle("请在这里输入标题")

#----------------------------
    #调用label_txt_img函数
    input_box(window)
#----------------------------

    #显示窗口
    window.show()

    #鼠标悬停文字 说明tips
    window.setToolTip("这是一个tips提示")



    # 等待窗口停止
    sys.exit(app.exec())#需要在最下面


