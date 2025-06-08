from PySide6.QtWidgets import QApplication,QWidget,QPushButton
import sys

class MyWidget(QWidget):#继承QWidget类
    def __init__(self):
        super().__init__()
        
        

    #按钮触发事件处理函数    
    def on_btn_clicked(self):
        print("按钮被点击了")

    def init_ui(self):
        pass

if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    window=MyWidget()
    window.show()
    
    
    
    
    
    
    
    
    
    
    
    sys.exit(app.exec())