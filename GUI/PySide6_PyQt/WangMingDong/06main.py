import sys  # 导入系统模块，用于处理命令行参数和退出程序
from PySide6.QtCore import Qt  # 从 QtCore 模块导入 Qt，用于常量和基础功能
from PySide6.QtGui import QGuiApplication  # 导入 QGuiApplication，用于创建 GUI 应用程序
from PySide6.QtQml import (
    QQmlApplicationEngine,
)  # 导入 QQmlApplicationEngine，用于加载和运行 QML 文件

if __name__ == "__main__":  # 确保脚本是直接运行，而不是被导入
    app = QGuiApplication(sys.argv)  # 创建一个QT的对象

    engine = (
        QQmlApplicationEngine()
    )  # 创建一个 QQmlApplicationEngine 实例，用于加载 QML 界面

    # 使用绝对路径加载 QML 文件
    qml_path = (
        "D:/Cache/VSCode_hc/PySide6/WangMingDong/06main.qml"  # 定义 QML 文件的绝对路径
    )
    engine.load(qml_path)  # 加载指定路径的 QML 文件

    if not engine.rootObjects():  # 检查根对象是否成功加载
        sys.exit(-1)  # 如果没有加载根对象，则退出程序，返回错误码 -1

    sys.exit(app.exec())  # 启动应用程序的主事件循环，并在退出时返回相应的状态码
