from PySide6.QtWidgets import QApplication, QWidget, QVBoxLayout
from PySide6.QtWidgets import QPushButton, QHBoxLayout, QFormLayout
from PySide6.QtWidgets import QLineEdit
from PySide6.QtWidgets import QMessageBox  # 弹窗
import sys

def inf_box(window):  # 弹窗函数
    print("消息按钮被点击")
    QMessageBox.information(window, "通知", "已完成")

def del_box(window):  # 删除函数
    print("删除按钮被点击")
    reply = QMessageBox.warning(window, "警告", "您确定要删除该项吗？", QMessageBox.Yes | QMessageBox.No,QMessageBox.No)#最后一个是默认按钮
    if reply == QMessageBox.Yes:
        print("用户确认删除")
    else:
        print("用户取消删除")

def crit_box(window):  # 批判性错误函数
    print("错误按钮被点击")
    QMessageBox.critical(window, "错误", "操作失败，请重试。")

def que_box(window):  # 询问函数
    print("询问按钮被点击")
    reply = QMessageBox.question(window, "询问", "您确定要执行此操作吗？", QMessageBox.Yes | QMessageBox.No)
    if reply == QMessageBox.Yes:
        print("用户确认执行")
    else:
        print("用户取消执行")

def input_box(window):
    # 创建表单布局
    layout_root = QVBoxLayout()  # 垂直布局
    # 添加到窗口也可以: layout_root.setParent(window)
    window.setLayout(layout_root)

    # 创建消息按钮
    btn_inf = QPushButton("消息")
    btn_inf.clicked.connect(lambda: inf_box(window))
    layout_root.addWidget(btn_inf)

    # 创建删除按钮
    btn_del = QPushButton("删除")
    btn_del.clicked.connect(lambda: del_box(window))
    layout_root.addWidget(btn_del)

    # 创建错误按钮
    btn_crit = QPushButton("错误")
    btn_crit.clicked.connect(lambda: crit_box(window))
    layout_root.addWidget(btn_crit)

    # 创建询问按钮
    btn_que = QPushButton("询问")
    btn_que.clicked.connect(lambda: que_box(window))
    layout_root.addWidget(btn_que)
    
    

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
