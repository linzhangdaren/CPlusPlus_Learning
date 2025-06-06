from PySide6.QtWidgets import (
    QApplication,  # 这个是PySide6的GUI库
    QMainWindow,  # 这个是PySide6的主窗口类
    QPushButton,  # 这个是PySide6的按钮类
    QLabel,  # 这个是PySide6的标签类
    QVBoxLayout,  # 这个是PySide6的垂直布局类
    QHBoxLayout,  # 这个是PySide6的水平布局类
)  # 从PySide6库中导入QApplication和QMainWindow类


class MainWindow(QMainWindow):  # 定义一个主窗口类，继承自QMainWindow
    def __init__(self):  # 初始化方法
        super().__init__()  # 调用父类的初始化方法

        # # 按钮 QPushbutton
        # btn = QPushButton("按钮", self)  # 创建一个按钮
        # btn.setGeometry(100, 100, 200, 100)
        # btn.setToolTip("这是一个按钮")  # 设置按钮的提示信息

        # 标签 QLabel
        lb = QLabel("标签", self)  # 创建一个标签


if __name__ == "__main__":  # 检查是否为主程序入口
    app = QApplication()  # 创建QApplication对象
    mainWindow = MainWindow()  # 创建主窗口对象
    mainWindow.show()  # 显示主窗口
    app.exec()  # 启动应用程序的事件循环
