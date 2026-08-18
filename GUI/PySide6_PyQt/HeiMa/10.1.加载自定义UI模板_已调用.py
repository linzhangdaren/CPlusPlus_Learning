from PySide6.QtWidgets import QApplication,QWidget,QPushButton
import sys
from ui.my_widget_ui import Ui_Form#导入界面设计UI的名字

class MyWidget(QWidget):#继承QWidget类
    def __init__(self):
        super().__init__()
        
        self.ui=Ui_Form()#接受Ui_Form类 UI_Form是在界面设计中自定义的名字
        self.ui.setupUi(self)#调用UI模板中的setupUi方法

        self.init_ui()
        
#______________只需要常修改的地方_________________       
    def on_btn_clicked(self):
        print("按钮被点击了")
        
    
    def init_ui(self):
        self.ui.btn_send.clicked.connect(self.on_btn_clicked)#绑定按钮点击事件处理函数 btn_send是在界面设计中自定义按钮的名字
 #______________只需要常修改的地方_________________          

if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    
    
    window=MyWidget()
    window.show()
    
    
    
    
    
    
    
    
    
    
    
    sys.exit(app.exec())