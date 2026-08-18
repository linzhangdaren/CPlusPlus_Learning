'''
1. 导入socket库'
2.创建socket套接字
3.建立TCP连接(和服务端建立连接)
4.发送数据(到服务端)
5.等待接受数据(从服务端接收)
6.关闭套接字
'''
# /////////////////////////////


# 1. 导入socket库'
import socket

# 2.创建socket套接字(TCP客户端对象)
tcp_client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
'''
参数:
 1.地址类型 family:
    AF_INET IPv4协议
    AF_INET6 IPv6协议
 2.套接字类型 type:
    SOCK_STREAM TCP协议
    SOCK_DGRAM UDP协议
 3.协议类型 proto:0
 4.阻塞模式 blocking:True
'''

# 3.建立TCP连接(和服务端建立连接)
addr=('127.0.0.1', 8000) #  # 调试助手中的 服务器 本机ip地址
tcp_client_socket.connect(addr)
# 4.发送数据(到服务端)
tcp_client_socket.send('你好啊'.encode('utf-8'))
# 注意: send()方法发送的数据必须是bytes类型, 所以需要先编码为bytes类型

# /////////////5.等待接收数据/////////////
print('等待接收数据...')# 代码会在这里阻塞,直到服务器发送数据过来
recv_data = tcp_client_socket.recv(1024) # 缓冲区:接收1024字节数据
print(recv_data.decode('utf-8')) # 转码&打印接收到的数据

# 6关闭套接字
tcp_client_socket.close()