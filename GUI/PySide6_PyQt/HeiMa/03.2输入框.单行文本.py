from PySide6.QtWidgets import QApplication, QWidget,QLabel,QLineEdit,QVBoxLayout
from PySide6.QtGui import QIcon
from PySide6.QtGui import QPixmap
import sys

def input_box(window):#为什么要加window,因为要设置组件的父对象不加也行
    #排版 竖直垂直排列 V=Vertical H=Horizontal
    layout=QVBoxLayout()
    #创建标签
    
    #输入框1
    edit_user=QLineEdit()#创建输入框
    edit_user.setPlaceholderText("请输入用户名")#设置提示文字
    edit_user.setText("admin")#设置默认文字
    edit_user.setMaxLength(10)#设置最大长度
    # edit_user.setParent(window)#设置父对象 添加上下排列就不需要了
    layout.addWidget(edit_user)
    
    #输入框2
    edit_password=QLineEdit()
    edit_password.setPlaceholderText("请输入密码")
    edit_password.setEchoMode(QLineEdit.Password)#设置密码显示模式 还有Normal  NoEcho PasswordEcho
    layout.addWidget(edit_password)
    
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


