from PySide6.QtWidgets import QApplication, QWidget,QLabel
from PySide6.QtGui import QIcon
from PySide6.QtGui import QPixmap
import sys

def label_txt_img(window):#为什么要加window,因为要设置组件的父对象不加也行
    #==========================================组件初始配置
    #创建文本标签
    label_txt = QLabel(window)#或者label.setParent(window)#设置父对象
    label_txt.setText("这是一段文字")
    label_txt.move(0, 0)  # 设置文本标签位置

    #加载图片标签
    label_pixmap=QLabel(window)
    pixmap=QPixmap("icon.png")
    label_pixmap.setPixmap(pixmap)
    label_pixmap.move(0, 15)  # 设置图片标签位置
    #根据背景图片设置窗口大小
    # window.resize(pixmap.width(), pixmap.height())
    #==========================================组件初始配置

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
    label_txt_img(window)
#----------------------------

    #显示窗口
    window.show()

    #鼠标悬停文字 说明tips
    window.setToolTip("这是一个tips提示")



    # 等待窗口停止
    sys.exit(app.exec())#需要在最下面


