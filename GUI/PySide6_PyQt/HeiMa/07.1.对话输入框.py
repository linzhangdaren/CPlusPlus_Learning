from PySide6.QtWidgets import QApplication, QWidget, QVBoxLayout
from PySide6.QtWidgets import QPushButton, QHBoxLayout, QFormLayout
from PySide6.QtWidgets import QLineEdit
from PySide6.QtWidgets import QMessageBox  # 弹窗
from PySide6.QtWidgets import QInputDialog  # 输入框
import sys

def input_msg():  # 弹窗函数
    print("按钮被点击")
    text,ok = QInputDialog.getText(window, "消息", "请输入内容：")
    print(text,ok)
    

def input_box(window):
    # 创建表单布局
    layout_root = QVBoxLayout()  # 垂直布局
    # 添加到窗口也可以: layout_root.setParent(window)
    window.setLayout(layout_root)

    # 创建消息按钮
    btn_msg = QPushButton("创建")
    btn_msg.clicked.connect(input_msg)
    layout_root.addWidget(btn_msg)

    
    

if __name__ == '__main__':
    # 创建应用程序
    app = QApplication(sys.argv)
    # 创建窗口
    window = QWidget()
    # 设置窗口大小
    window.resize(400, 300)

    # 设置标题
    window.setWindowTitle("请在这里输入标题")

    # 调用 input_box 函数
    input_box(window)

    # 显示窗口
    window.show()

    # 鼠标悬停文字 说明 tips
    window.setToolTip("这是一个tips提示")

    # 等待窗口停止
    sys.exit(app.exec())
