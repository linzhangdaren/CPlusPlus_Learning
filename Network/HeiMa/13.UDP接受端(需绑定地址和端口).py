'''
1.导入socket库
2.创建socket对象
3.绑定地址和端口 
4.接收数据
5.关闭socket套接字
'''

# 1.导入socket库
from socket import *
# 2.创建socket对象
udp_socket = socket(AF_INET, SOCK_DGRAM)
# 3.绑定地址和端口
udp_socket.bind(('', 8888))# 调试助手 目标端口
# 4.接收数据
#代码会在此处阻塞，等待接收数据
msg=udp_socket.recvfrom(1024)
# 返回是两个值 1.数据字节数组 2.发送端的地址和端口元组
#解包msg
data,addr=msg
print(data.decode())

# 5.关闭socket套接字
udp_socket.close()