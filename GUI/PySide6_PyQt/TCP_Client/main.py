from PySide6.QtWidgets import *
from PySide6.QtCore import *
from PySide6.QtGui import *
import sys

from ui.main_window_ui import Ui_MainWindow#导入界面设计UI的名字

from net_assist_widget import NetAssistWidget#导入单独设计的网络助手widget界面
from serial_assist_widget import SerAssistWidget#导入单独设计的串口widget界面

class MyWindow(QMainWindow):#继承QMainWindow类 这个名字在UI文件中class:
    def __init__(self):
        super().__init__()

        self.ui = Ui_MainWindow()#实例化界面设计类
        self.ui.setupUi(self)#调用setupUi方法
        self.init_ui()#构造函数调用初始化界面

#______________只需要常修改的地方_________________       
    # def on_btn_clicked(self):
    #     print("按钮被点击了")
        
    
    def init_ui(self):
        #绑定按钮点击事件处理函数 btn_send是在界面设计中自定义按钮的名字
        # self.ui.pushButton.clicked.connect(self.on_btn_clicked)
        Net=NetAssistWidget(self)#这个函数调用了NetAssistWidget()界面
        self.ui.tabWidget.addTab(Net, "网络助手")
        
        serial=SerAssistWidget(self)#调用了串口界面
        self.ui.tabWidget.addTab(serial, "串口助手")
    
#______________只需要常修改的地方_________________          

if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    
    
    window=MyWindow()
    window.show()
    
    sys.exit(app.exec())#未关闭之前持续刷新界面