
from PySide6.QtWidgets import QApplication, QWidget,QVBoxLayout
from PySide6.QtWidgets import QPushButton,QHBoxLayout,QFormLayout
from PySide6.QtWidgets import QLineEdit
import sys



def input_box(window):
    #创建表单布局
    layout=QFormLayout(window)#写了window就不用写下面的setLayout了
    # window.setLayout(layout) #把layout添加到窗口 
    
    #创建输入框
    edit_user=QLineEdit()#用户输入框
    edit_pwd=QLineEdit()#密码输入框
    edit_pwd.setEchoMode(QLineEdit.Password) #密码输入框显示为*
    edit_phone=QLineEdit()#手机号输入框
    #提交按钮
    btn_ok=QPushButton("提交")
    btn_ok.clicked.connect(lambda:print("提交"))#按钮点击事件
    #添加到表单布局
    layout.addRow("用户名",edit_user)
    layout.addRow("密码",edit_pwd)
    layout.addRow("手机号",edit_phone)
    layout.addRow(btn_ok)
    
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


