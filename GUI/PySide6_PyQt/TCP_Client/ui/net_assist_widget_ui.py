# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'net_assist_widget.ui'
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
from PySide6.QtWidgets import (QApplication, QComboBox, QFormLayout, QGroupBox,
    QHBoxLayout, QLabel, QLineEdit, QPushButton,
    QSizePolicy, QSpacerItem, QTextEdit, QVBoxLayout,
    QWidget)
from ui import resource_rc

class Ui_NetAssistWidget(object):
    def setupUi(self, NetAssistWidget):
        if not NetAssistWidget.objectName():
            NetAssistWidget.setObjectName(u"NetAssistWidget")
        NetAssistWidget.resize(626, 486)
        self.horizontalLayout_3 = QHBoxLayout(NetAssistWidget)
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.groupBox = QGroupBox(NetAssistWidget)
        self.groupBox.setObjectName(u"groupBox")
        self.verticalLayout = QVBoxLayout(self.groupBox)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.formLayout = QFormLayout()
        self.formLayout.setObjectName(u"formLayout")
        self.Label = QLabel(self.groupBox)
        self.Label.setObjectName(u"Label")

        self.formLayout.setWidget(0, QFormLayout.ItemRole.LabelRole, self.Label)

        self.cb_mode = QComboBox(self.groupBox)
        self.cb_mode.addItem("")
        self.cb_mode.addItem("")
        self.cb_mode.addItem("")
        self.cb_mode.setObjectName(u"cb_mode")

        self.formLayout.setWidget(0, QFormLayout.ItemRole.FieldRole, self.cb_mode)

        self.iPLabel = QLabel(self.groupBox)
        self.iPLabel.setObjectName(u"iPLabel")

        self.formLayout.setWidget(1, QFormLayout.ItemRole.LabelRole, self.iPLabel)

        self.edit_target_ip = QLineEdit(self.groupBox)
        self.edit_target_ip.setObjectName(u"edit_target_ip")
        self.edit_target_ip.setClearButtonEnabled(True)

        self.formLayout.setWidget(1, QFormLayout.ItemRole.FieldRole, self.edit_target_ip)

        self.Label_2 = QLabel(self.groupBox)
        self.Label_2.setObjectName(u"Label_2")

        self.formLayout.setWidget(2, QFormLayout.ItemRole.LabelRole, self.Label_2)

        self.edit_target_port = QLineEdit(self.groupBox)
        self.edit_target_port.setObjectName(u"edit_target_port")
        self.edit_target_port.setClearButtonEnabled(True)

        self.formLayout.setWidget(2, QFormLayout.ItemRole.FieldRole, self.edit_target_port)


        self.verticalLayout.addLayout(self.formLayout)

        self.btn_connect = QPushButton(self.groupBox)
        self.btn_connect.setObjectName(u"btn_connect")
        icon = QIcon()
        icon.addFile(u":/icon/res/un_connect.svg", QSize(), QIcon.Mode.Normal, QIcon.State.Off)
        self.btn_connect.setIcon(icon)
        self.btn_connect.setIconSize(QSize(16, 16))

        self.verticalLayout.addWidget(self.btn_connect)

        self.verticalSpacer = QSpacerItem(20, 40, QSizePolicy.Policy.Minimum, QSizePolicy.Policy.Expanding)

        self.verticalLayout.addItem(self.verticalSpacer)


        self.horizontalLayout_3.addWidget(self.groupBox)

        self.verticalLayout_2 = QVBoxLayout()
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.edit_recv = QTextEdit(NetAssistWidget)
        self.edit_recv.setObjectName(u"edit_recv")

        self.verticalLayout_2.addWidget(self.edit_recv)

        self.horizontalLayout = QHBoxLayout()
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.label = QLabel(NetAssistWidget)
        self.label.setObjectName(u"label")

        self.horizontalLayout.addWidget(self.label)

        self.cb_local_ip = QComboBox(NetAssistWidget)
        self.cb_local_ip.setObjectName(u"cb_local_ip")

        self.horizontalLayout.addWidget(self.cb_local_ip)

        self.label_2 = QLabel(NetAssistWidget)
        self.label_2.setObjectName(u"label_2")

        self.horizontalLayout.addWidget(self.label_2)

        self.edit_local_port = QLineEdit(NetAssistWidget)
        self.edit_local_port.setObjectName(u"edit_local_port")

        self.horizontalLayout.addWidget(self.edit_local_port)

        self.horizontalLayout.setStretch(1, 1)

        self.verticalLayout_2.addLayout(self.horizontalLayout)

        self.verticalLayout_3 = QVBoxLayout()
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.edit_send = QTextEdit(NetAssistWidget)
        self.edit_send.setObjectName(u"edit_send")

        self.verticalLayout_3.addWidget(self.edit_send)

        self.btn_send = QPushButton(NetAssistWidget)
        self.btn_send.setObjectName(u"btn_send")

        self.verticalLayout_3.addWidget(self.btn_send)


        self.verticalLayout_2.addLayout(self.verticalLayout_3)


        self.horizontalLayout_3.addLayout(self.verticalLayout_2)

        self.horizontalLayout_3.setStretch(1, 1)

        self.retranslateUi(NetAssistWidget)

        QMetaObject.connectSlotsByName(NetAssistWidget)
    # setupUi

    def retranslateUi(self, NetAssistWidget):
        NetAssistWidget.setWindowTitle(QCoreApplication.translate("NetAssistWidget", u"Form", None))
        self.groupBox.setTitle(QCoreApplication.translate("NetAssistWidget", u"\u7f51\u7edc\u8bbe\u7f6e", None))
        self.Label.setText(QCoreApplication.translate("NetAssistWidget", u"\u8bbe\u7f6e\u6a21\u5f0f:", None))
        self.cb_mode.setItemText(0, QCoreApplication.translate("NetAssistWidget", u"TCP\u5ba2\u6237\u7aef", None))
        self.cb_mode.setItemText(1, QCoreApplication.translate("NetAssistWidget", u"TCP\u670d\u52a1\u5668", None))
        self.cb_mode.setItemText(2, QCoreApplication.translate("NetAssistWidget", u"UPD", None))

        self.iPLabel.setText(QCoreApplication.translate("NetAssistWidget", u"\u670d\u52a1\u5668IP:", None))
        self.edit_target_ip.setInputMask(QCoreApplication.translate("NetAssistWidget", u"000.000.000.000", None))
        self.Label_2.setText(QCoreApplication.translate("NetAssistWidget", u"\u670d\u52a1\u5668\u7aef\u53e3", None))
        self.edit_target_port.setInputMask(QCoreApplication.translate("NetAssistWidget", u"99999", None))
        self.edit_target_port.setText("")
        self.edit_target_port.setPlaceholderText(QCoreApplication.translate("NetAssistWidget", u"0-65535", None))
        self.btn_connect.setText(QCoreApplication.translate("NetAssistWidget", u"\u8fde\u63a5\u670d\u52a1\u5668", None))
        self.label.setText(QCoreApplication.translate("NetAssistWidget", u"\u672c\u5730IP", None))
        self.label_2.setText(QCoreApplication.translate("NetAssistWidget", u"\u672c\u5730\u7aef\u53e3", None))
        self.btn_send.setText(QCoreApplication.translate("NetAssistWidget", u"\u53d1\u9001", None))
    # retranslateUi

