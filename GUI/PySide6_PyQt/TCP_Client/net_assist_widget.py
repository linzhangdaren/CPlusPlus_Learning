from PySide6.QtWidgets import *
from PySide6.QtCore import *
from PySide6.QtGui import *
import sys

from ui.net_assist_widget_ui import Ui_NetAssistWidget#导入界面设计UI的名字
import socket#这个是用来创建套接字的 网络通讯模块

class NetAssistWidget(QWidget):#继承QWidget类 这个名字在UI文件中class:
    def __init__(self,parent=None):
        super().__init__(parent)

        self.ui = Ui_NetAssistWidget()#实例化界面设计类
        self.ui.setupUi(self)#调用setupUi方法

        self.init_ui()#构造函数调用初始化界面
        
#______________只需要常修改的地方_________________       
#连接服务器按钮点击事件处理函数///////////////////////////////
    def on_btn_connect(self):
        target_ip=self.ui.edit_target_ip.text()#获取输入的IP
        target_port=self.ui.edit_target_port.text()#获取输入的端口
        print("1.连接服务器按钮被点击 IP:",target_ip,"端口:",target_port)
        #判断用户输入是否为空
        if target_ip=='' or target_port=='':
            print("请输入IP和端口")
            return
#套接字////////////////////////////////////////////////////////////
        #TCP 套接字对象 客户端
        tcp_client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        #提取输入框的IP和端口格式为字符串+整数的元组类型
        target_addr=(target_ip,int(target_port))
        tcp_client.connect(target_addr)#连接服务器
        print("2.连接成功")
        
        #接收消息二进制的
        byte_data=tcp_client.recv(2048)#这里注意阻塞程序 会出现未响应
        #解码
        str_data=byte_data.decode('utf-8')
        print("3.服务器发送的数据：",str_data)
        
        #关闭服务器
        tcp_client.close()
        print("4.连接已关闭")
        
    
    def init_ui(self):
        self.ui.btn_connect.clicked.connect(self.on_btn_connect)
        # #绑定按钮点击事件处理函数 btn_send是在界面设计中自定义按钮的名字
#______________只需要常修改的地方_________________          

if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    
    
    window=NetAssistWidget()
    window.show()
    
    sys.exit(app.exec())#未关闭之前持续刷新界面