from PySide6.QtWidgets import QApplication, QWidget, QVBoxLayout
from PySide6.QtWidgets import QPushButton, QHBoxLayout, QFormLayout
from PySide6.QtWidgets import QLineEdit
from PySide6.QtWidgets import QMessageBox  # 弹窗
from PySide6.QtWidgets import QInputDialog  # 输入框
from PySide6.QtWidgets import QRadioButton, QButtonGroup  # 单选框 按钮组
from PySide6.QtWidgets import QCheckBox     # 复选框
from PySide6.QtWidgets import QLabel  # 标签
import sys

# 显示选中状态

def input_box(window):
    layout_root = QVBoxLayout()  # 垂直布局
    window.setLayout(layout_root)  # 设置主窗口布局

    # 创建复选框
    global btn1, btn2, btn3  # 定义为全局变量
    btn1 = QCheckBox("抽烟")
    btn2 = QCheckBox("喝酒")
    btn3 = QCheckBox("烫头")

    # 添加复选框状态监听

    btn1.stateChanged.connect(lambda: print("抽烟状态：", btn1.isChecked()))
    btn2.stateChanged.connect(lambda: print("喝酒状态：", btn2.isChecked()))
    btn3.stateChanged.connect(lambda: print("烫头状态：", btn3.isChecked()))

    # 添加到布局
    layout_root.addWidget(QLabel("三大爱好:"))  # 标题
    layout_root.addWidget(btn1)
    layout_root.addWidget(btn2)
    layout_root.addWidget(btn3)
    
    # 设置默认选中状态
    btn3.setChecked(True)
    
    #提交按钮
    btn_submit = QPushButton("提交")
    #获取选中状态并提交
    btn_submit.clicked.connect(lambda: print("选中状态：", 
                                             btn1.isChecked(), 
                                             btn2.isChecked(), 
                                             btn3.isChecked()))
    #添加到布局
    layout_root.addWidget(btn_submit)

    
    
    


if __name__ == '__main__':
    app = QApplication(sys.argv)  # 创建应用实例
    window = QWidget()  # 创建主窗口
    window.resize(400, 300)  # 设置窗口大小
    window.setWindowTitle("性别选择器")  # 设置窗口标题
    input_box(window)  # 初始化UI
    window.show()  # 显示窗口
    window.setToolTip("请选择性别")  # 设置悬停提示
    sys.exit(app.exec())  # 进入事件循环