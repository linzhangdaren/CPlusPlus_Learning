from PySide6.QtWidgets import QApplication, QWidget
import sys

#创建应用程序
app = QApplication(sys.argv)

#创建窗口
window = QWidget()

#显示窗口
window.show()

# 等待窗口停止
sys.exit(app.exec())#需要在最下面


