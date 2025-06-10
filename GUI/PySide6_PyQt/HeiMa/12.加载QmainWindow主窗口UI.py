# QMainWindow相当于一个完整的软件界面了有菜单啊什么的
from PySide6.QtWidgets import QApplication,QWidget,QPushButton
from PySide6.QtWidgets import QMainWindow
import sys
from ui.my_window_ui import Ui_my_window#导入界面设计UI的名字

class MyWindow(QMainWindow):#继承QMainWindow类 这个名字在UI文件中class:
    def __init__(self):
        super().__init__()

        self.ui = Ui_my_window()#实例化界面设计类
        self.ui.setupUi(self)#调用setupUi方法

        self.init_ui()
        
#______________只需要常修改的地方_________________       
    def on_btn_clicked(self):
        print("按钮被点击了")
        
    
    def init_ui(self):
        self.ui.pushButton.clicked.connect(self.on_btn_clicked)#绑定按钮点击事件处理函数 btn_send是在界面设计中自定义按钮的名字
 #______________只需要常修改的地方_________________          

if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    
    
    window=MyWindow()
    window.show()
    
    
    
    
    
    
    
    
    
    
    
    sys.exit(app.exec())