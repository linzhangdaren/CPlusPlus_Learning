from PySide6.QtWidgets import QApplication, QWidget
from PySide6.QtGui import QIcon
import sys

#创建应用程序
app = QApplication(sys.argv)

#创建窗口
window = QWidget()

#设置标题
window.setWindowTitle("请在这里输入标题")

#设置图标
# window.setWindowIcon(QIcon("icon.png"))#单句写法
icon = QIcon("icon.png")
window.setWindowIcon(icon)

#显示窗口
window.show()
#设置窗口大小
# window.resize(400, 300)#重置窗口大小
#几何大小 设置窗口位置和大小
# window.setGeometry(500, 300, 400, 300)

#鼠标悬停文字 说明tips
window.setToolTip("这是一个窗口")




# 等待窗口停止
sys.exit(app.exec())#需要在最下面


