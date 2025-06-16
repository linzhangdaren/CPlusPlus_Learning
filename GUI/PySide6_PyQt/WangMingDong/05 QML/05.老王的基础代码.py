import sys
from pathlib import Path
from PySide6.QtCore import QUrl
from PySide6.QtWidgets import QApplication
from PySide6.QtQuick import QQuickView

if __name__ == "__main__":
    app = QApplication(sys.argv)  # 初始化 Qt 应用
    view = QQuickView()           # 创建 QML 视图
    
    # 使用 pathlib 构建 QML 文件路径（当前脚本目录 + 文件名） 绝对路径
    qml_path = Path(__file__).parent / "qml-01.qml"#获取当前脚本的绝对路径
    qml_path=str(qml_path)#转换为字符串
    view.setSource(QUrl.fromLocalFile(qml_path))  # 加载 QML 文件
        
    view.show()                   # 显示窗口
    sys.exit(app.exec())          # 进入事件循环  