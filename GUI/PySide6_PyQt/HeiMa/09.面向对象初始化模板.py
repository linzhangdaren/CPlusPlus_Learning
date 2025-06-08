from PySide6.QtWidgets import QApplication,QWidget,QPushButton
import sys

class MyWidget(QWidget):#继承QWidget类
    
    def __init__(self,title):
        super().__init__()
        self.setWindowTitle(title)
        self.resize(400,300)
        self.init_ui()
        
    def on_btn_clicked(self):
        print("按钮被点击了")
        
    def init_ui(self):
        btn=QPushButton("按钮",self)
        btn.clicked.connect(self.on_btn_clicked)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    window=MyWidget("窗口")
    window.show()
    
    
    
    
    
    
    
    
    
    
    
    sys.exit(app.exec())