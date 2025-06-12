'''
1.导入socket库
2.创建socket对象
3.绑定地址和端口 
4.发送数据
5.关闭socket套接字
'''

# 1.导入socket库
from socket import *
# 2.创建socket对象
udp_socket = socket(AF_INET, SOCK_DGRAM)
# 3.绑定地址和端口 可以不用绑定，但需要知道对方的地址和端口
udp_socket.bind(('', 8888))#发送端绑定端口 随意
# 4.发送数据
data="哈喽，你好！"
addr=("127.0.0.1", 56050)#接收端地址和端口 调试助手udp接收端的地址和端口
udp_socket.sendto(data.encode("utf-8"), addr)
# 5.关闭socket套接字
udp_socket.close()