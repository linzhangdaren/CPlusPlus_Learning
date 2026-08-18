
from PySide6.QtWidgets import QApplication, QWidget,QVBoxLayout
from PySide6.QtWidgets import QPushButton,QHBoxLayout,QFormLayout
from PySide6.QtWidgets import QLineEdit
import sys



def input_box(window):
    #创建表单布局
    layout_root=QHBoxLayout( )#水平布局
    window.setLayout(layout_root)#添加到窗口也可以:layout_root.setParent(window)


    #创建4列 
    v1_layout=QVBoxLayout()
    v2_layout=QVBoxLayout()
    v3_layout=QVBoxLayout()
    v4_layout=QVBoxLayout()
    
    # 添加到layout_root布局
    layout_root.addLayout(v1_layout)
    layout_root.addLayout(v2_layout)
    layout_root.addLayout(v3_layout)
    layout_root.addLayout(v4_layout)
    
    #添加按钮 第一列1添加1个按钮;第二列添加2个按钮...
    v1_layout.addWidget(QPushButton("1"))
    
    v2_layout.addWidget(QPushButton("2"))
    v2_layout.addWidget(QPushButton("3"))
    
    v3_layout.addWidget(QPushButton("4"))
    v3_layout.addWidget(QPushButton("5"))
    v3_layout.addWidget(QPushButton("6"))
    
    v4_layout.addWidget(QPushButton("7"))
    v4_layout.addWidget(QPushButton("8"))
    v4_layout.addWidget(QPushButton("9"))
    v4_layout.addWidget(QPushButton("10"))




    
if __name__ == '__main__':
    
    #创建应用程序
    app = QApplication(sys.argv)
    #创建窗口
    window = QWidget()
    #设置窗口大小
    # window.resize(400, 300)

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


