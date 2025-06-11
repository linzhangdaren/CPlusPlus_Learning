'''
1.导入socket库并创建socket对象
2.bind 绑定ip和port
3.listen 监听连接
4.accept 接收客户端的连接
5.recv/send 接收客户端发送的消息
'''


# 1.导入socket库并创建socket对象
import socket
tcp_server_socket=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

# 2.bing 绑定ip和port 
#只接受本地请求 如果默认不填写ip，则表示接受所有ip的请求
tcp_server_socket.bind(('127.0.0.1',8100))

# 3.listen 监听连接 主动连接模式转为被动接受模式 接受客户端的连接
tcp_server_socket.listen(128)# 最大连接数 也就是最大排队数人数
print("服务端启动成功,等待客户端连接...")

# 4.accept 接收客户端的连接 (阻塞当前线程，等待客户端连接)
client=tcp_server_socket.accept()
print("有新的客户端接入:",client)

# 5.recv/send 接收客户端发送的消息
tcp_server_socket.close()