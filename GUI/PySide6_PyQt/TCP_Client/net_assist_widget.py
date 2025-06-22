from PySide6.QtWidgets import *
from PySide6.QtCore import *
from PySide6.QtGui import *
import sys
import threading#导入线程模块
import time#导入时间模块

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
        #创建线程
        thread_client=threading.Thread(
            target=self.run_tcp_client,#线程客户端函数
            args=(target_ip,target_port),
            daemon=True#设置守护线程 主线程结束 子线程也结束
            )
        thread_client.start()#启动线程
        
#线程函数&客户端做成函数方便调用///////////////////////////////
    def run_tcp_client(self,target_ip,target_port):
        #TCP 套接字对象 客户端
        tcp_client=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        #提取输入框的IP和端口格式为字符串+整数的元组类型
        try:
            target_addr=(target_ip,int(target_port))
            tcp_client.connect(target_addr)#连接服务器
            print("2.连接成功")
            #获取本地分配的IP地址和端口号
            socket_name=tcp_client.getsockname()
            #解包local_addr元组 得到IP地址和端口号
            local_ip,local_port=socket_name
            print("3.本地IP地址:",local_ip,"本地端口号:",local_port)
            #UI界面更新显示///////////////////////////////////////////////////
            #ui界面cb_local_ip显示本地IP地址和cb_local_port显示本地端口号
            self.ui.cb_local_ip.addItem(local_ip)
            self.ui.edit_local_port.setText(str(local_port))
            #edit_recv窗口显示连接成功!并显示时间
            connect_time=time.strftime("%Y-%m-%d %H:%M:%S",time.localtime())
            self.ui.edit_recv.append("连接成功! "+connect_time)
            #修改按钮图标
            self.ui.btn_connect.setText("断开服务器")
            icon_connect=QIcon(":/icon/res/connect.svg")
            self.ui.btn_connect.setIcon(icon_connect)
            
            #接收消息二进制的
            byte_data=tcp_client.recv(2048)#这里注意阻塞程序 会出现未响应
            #解码
            str_data=byte_data.decode('utf-8')
            print("3.服务器发送的数据：",str_data)
        except Exception as e:
            print("连接失败",e)
        
        #关闭服务器
        finally:
            tcp_client.close()
            print("4.连接已关闭")
#连接服务器按钮点击事件处理函数///////////////////////////////////
    def init_ui(self):
        self.ui.btn_connect.clicked.connect(self.on_btn_connect)
        self.ui.edit_target_ip.setText("127.0.0.1")#默认IP地址
        self.ui.edit_target_port.setText("8000")#默认端口号
        # #绑定按钮点击事件处理函数 btn_send是在界面设计中自定义按钮的名字
#______________只需要常修改的地方_________________          

if __name__ == '__main__':
    app = QApplication(sys.argv)
    
    
    
    window=NetAssistWidget()
    window.show()
    
    sys.exit(app.exec())#未关闭之前持续刷新界面