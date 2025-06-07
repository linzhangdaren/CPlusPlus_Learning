from PySide6.QtWidgets import QApplication, QWidget, QVBoxLayout
from PySide6.QtWidgets import QPushButton, QHBoxLayout, QFormLayout
from PySide6.QtWidgets import QLineEdit
from PySide6.QtWidgets import QMessageBox  # 弹窗
from PySide6.QtWidgets import QInputDialog  # 输入框
from PySide6.QtWidgets import QRadioButton, QButtonGroup  # 单选框 按钮组
import sys


def input_box(window):
    layout_root = QHBoxLayout()  # 水平布局
    window.setLayout(layout_root)  # 设置主窗口布局

    btn_1 = QRadioButton("男")  # 创建性别选项按钮
    btn_2 = QRadioButton("女")
    
    #单独按钮也可以调用函数
    btn_1.toggled.connect(lambda: print(btn_1.text()))
    btn_2.toggled.connect(lambda: print(btn_2.text()))

    layout_root.addWidget(btn_1)  # 添加到布局
    layout_root.addWidget(btn_2)
    btn_2.setChecked(True)  # 默认选中"女"

    group = QButtonGroup()  # 创建互斥按钮组
    group.addButton(btn_1)
    group.addButton(btn_2)

    # 使用lambda表达式连接按钮切换事件
    # group.buttonToggled.connect(lambda: print(group.checkedButton().text()))

if __name__ == '__main__':
    app = QApplication(sys.argv)  # 创建应用实例
    window = QWidget()  # 创建主窗口
    window.resize(400, 300)  # 设置窗口大小
    window.setWindowTitle("性别选择器")  # 设置窗口标题
    input_box(window)  # 初始化UI
    window.show()  # 显示窗口
    window.setToolTip("请选择性别")  # 设置悬停提示
    sys.exit(app.exec())  # 进入事件循环