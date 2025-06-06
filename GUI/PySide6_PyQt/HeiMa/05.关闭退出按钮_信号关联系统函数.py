
from PySide6.QtWidgets import QApplication, QWidget,QVBoxLayout
from PySide6.QtWidgets import QPushButton
#导入信号槽 给程序员看的 告诉他不要直接调用函数 而是通过信号槽来调用函数
from PySide6.QtCore import pyqtSlot
import sys

@pyqtSlot# 装饰器 告诉python解释器 这是一个槽函数 不要直接调用
def btn_click():
    print("关闭")
    QApplication.quit()

def input_box(window):#为什么要加window,因为要设置组件的父对象不加也行
    #排版 竖直垂直排列 V=Vertical H=Horizontal
    layout=QVBoxLayout()
    
    #创建按钮
    btn=QPushButton("关闭")
    btn.clicked.connect(btn_click)#因为没有加括号()所以没有直接调用
    # 或者直接放入QApplication.quit
    # btn.clicked.connect(QApplication.quit)
    
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


