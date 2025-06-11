'''
1. 导入socket库'
2.创建socket套接字
3.建立TCP连接(和服务端建立连接)
4.发送数据(到服务端)
5.关闭套接字
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
addr=('127.0.0.1', 8000) # 服务端地址 前面字符串类型后面数字类型
tcp_client_socket.connect(addr)
# 4.发送数据(到服务端)
tcp_client_socket.send('你好啊'.encode('utf-8'))
# 注意: send()方法发送的数据必须是bytes类型, 所以需要先编码为bytes类型
# 5.关闭套接字
tcp_client_socket.close()