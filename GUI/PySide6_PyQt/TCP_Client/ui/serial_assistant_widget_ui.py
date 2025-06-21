# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'serial_assistant_widget.ui'
##
## Created by: Qt User Interface Compiler version 6.9.1
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QPushButton, QSizePolicy, QWidget)

class Ui_SerialAssistantWidget(object):
    def setupUi(self, SerialAssistantWidget):
        if not SerialAssistantWidget.objectName():
            SerialAssistantWidget.setObjectName(u"SerialAssistantWidget")
        SerialAssistantWidget.resize(400, 300)
        self.pushButton = QPushButton(SerialAssistantWidget)
        self.pushButton.setObjectName(u"pushButton")
        self.pushButton.setGeometry(QRect(10, 20, 91, 24))

        self.retranslateUi(SerialAssistantWidget)

        QMetaObject.connectSlotsByName(SerialAssistantWidget)
    # setupUi

    def retranslateUi(self, SerialAssistantWidget):
        SerialAssistantWidget.setWindowTitle(QCoreApplication.translate("SerialAssistantWidget", u"Form", None))
        self.pushButton.setText(QCoreApplication.translate("SerialAssistantWidget", u"\u8fde\u63a5\u4e32\u53e3\u8bbe\u5907", None))
    # retranslateUi

