
from PySide6.QtWidgets import QApplication, QWidget,QVBoxLayout
from PySide6.QtWidgets import QPushButton
import sys

def btn_click():
    print("按钮被点击了")

def input_box(window):#为什么要加window,因为要设置组件的父对象不加也行
    #排版 竖直垂直排列 V=Vertical H=Horizontal
    layout=QVBoxLayout()
    
    #创建按钮
    btn=QPushButton("请点击")
    #关联点击事件/函数 
    # 有长按事件:btn.pressed.connect(btn_click)
    # 有释放事件:btn.released.connect(btn_click)
    # 单击事件:
    btn.clicked.connect(btn_click)
    #添加到layout
    layout.addWidget(btn)
    


    
    
    #把layout添加到窗口 
    window.setLayout(layout)
    
    
    
    
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


