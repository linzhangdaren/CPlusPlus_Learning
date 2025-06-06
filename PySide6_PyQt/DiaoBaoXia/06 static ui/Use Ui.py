from PySide6.QtWidgets import (
    QApplication,  # 这个是PySide6的GUI库 必须写!!!
    QMainWindow,  # 这个是PySide6的主窗口类
)  # 从PySide6库中导入QApplication和QMainWindow类


class MainWindow(QMainWindow):  # 定义一个主窗口类，继承自QMainWindow
    def __init__(self):  # 初始化方法
        super().__init__()  # 调用父类的初始化方法


if __name__ == "__main__":  # 检查是否为主程序入口
    app = QApplication()  # 创建QApplication对象 必须写!!!
    mainWindow = MainWindow()  # 创建主窗口对象
    mainWindow.show()  # 显示主窗口
    app.exec()  # 启动应用程序的事件循环 必须写!!!

# 三个必须写不然运行不起来的
