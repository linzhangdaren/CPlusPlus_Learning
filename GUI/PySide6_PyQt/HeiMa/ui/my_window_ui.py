# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'my_window.ui'
##
## Created by: Qt User Interface Compiler version 6.9.1
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QApplication, QHBoxLayout, QMainWindow, QMenu,
    QMenuBar, QPushButton, QSizePolicy, QStatusBar,
    QWidget)

class Ui_my_window(object):
    def setupUi(self, my_window):
        if not my_window.objectName():
            my_window.setObjectName(u"my_window")
        my_window.resize(387, 270)
        self.actionOpen = QAction(my_window)
        self.actionOpen.setObjectName(u"actionOpen")
        self.actionSave = QAction(my_window)
        self.actionSave.setObjectName(u"actionSave")
        self.actionLoad = QAction(my_window)
        self.actionLoad.setObjectName(u"actionLoad")
        self.actionEsc = QAction(my_window)
        self.actionEsc.setObjectName(u"actionEsc")
        self.actionCopy = QAction(my_window)
        self.actionCopy.setObjectName(u"actionCopy")
        self.actionPaste = QAction(my_window)
        self.actionPaste.setObjectName(u"actionPaste")
        self.actionAbout = QAction(my_window)
        self.actionAbout.setObjectName(u"actionAbout")
        self.centralwidget = QWidget(my_window)
        self.centralwidget.setObjectName(u"centralwidget")
        self.layoutWidget = QWidget(self.centralwidget)
        self.layoutWidget.setObjectName(u"layoutWidget")
        self.layoutWidget.setGeometry(QRect(70, 60, 158, 26))
        self.horizontalLayout = QHBoxLayout(self.layoutWidget)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.pushButton_2 = QPushButton(self.layoutWidget)
        self.pushButton_2.setObjectName(u"pushButton_2")

        self.horizontalLayout.addWidget(self.pushButton_2)

        self.pushButton = QPushButton(self.layoutWidget)
        self.pushButton.setObjectName(u"pushButton")

        self.horizontalLayout.addWidget(self.pushButton)

        my_window.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(my_window)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 387, 33))
        self.menu = QMenu(self.menubar)
        self.menu.setObjectName(u"menu")
        self.menu_2 = QMenu(self.menubar)
        self.menu_2.setObjectName(u"menu_2")
        self.menu_3 = QMenu(self.menubar)
        self.menu_3.setObjectName(u"menu_3")
        my_window.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(my_window)
        self.statusbar.setObjectName(u"statusbar")
        my_window.setStatusBar(self.statusbar)

        self.menubar.addAction(self.menu.menuAction())
        self.menubar.addAction(self.menu_2.menuAction())
        self.menubar.addAction(self.menu_3.menuAction())
        self.menu.addAction(self.actionOpen)
        self.menu.addAction(self.actionSave)
        self.menu.addAction(self.actionLoad)
        self.menu.addAction(self.actionEsc)
        self.menu_2.addAction(self.actionCopy)
        self.menu_2.addAction(self.actionPaste)
        self.menu_3.addAction(self.actionAbout)

        self.retranslateUi(my_window)

        QMetaObject.connectSlotsByName(my_window)
    # setupUi

    def retranslateUi(self, my_window):
        my_window.setWindowTitle(QCoreApplication.translate("my_window", u"MainWindow", None))
        self.actionOpen.setText(QCoreApplication.translate("my_window", u"Open", None))
        self.actionSave.setText(QCoreApplication.translate("my_window", u"Save", None))
        self.actionLoad.setText(QCoreApplication.translate("my_window", u"Load", None))
        self.actionEsc.setText(QCoreApplication.translate("my_window", u"Esc", None))
        self.actionCopy.setText(QCoreApplication.translate("my_window", u"Copy", None))
        self.actionPaste.setText(QCoreApplication.translate("my_window", u"Paste", None))
        self.actionAbout.setText(QCoreApplication.translate("my_window", u"About", None))
        self.pushButton_2.setText(QCoreApplication.translate("my_window", u"PushButton", None))
        self.pushButton.setText(QCoreApplication.translate("my_window", u"PushButton", None))
        self.menu.setTitle(QCoreApplication.translate("my_window", u"\u6587\u4ef6", None))
        self.menu_2.setTitle(QCoreApplication.translate("my_window", u"\u7f16\u8f91", None))
        self.menu_3.setTitle(QCoreApplication.translate("my_window", u"\u5e2e\u52a9", None))
    # retranslateUi

