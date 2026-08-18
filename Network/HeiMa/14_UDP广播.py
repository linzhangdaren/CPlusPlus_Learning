'''
1.导入socket库
2.创建socket对象
3.设置socket允许广播
4.发送数据(使用广播的地址)
5.关闭socket套接字
'''

# 1.导入socket库
from socket import *
# 2.创建socket对象
udp_socket = socket(AF_INET, SOCK_DGRAM)
# 3.设置socket允许广播
udp_socket.setsockopt(SOL_SOCKET, SO_BROADCAST, 1)
'''参数:
level就像 “设置的菜单层级”，先选 “系统设置” 还是 “网络设置”；
optname是具体的 “设置项”，比如 “允许广播” 就是 “开启全员群聊”；
value就是 “开关状态” 或 “具体数值”，比如 “1” 就是 “打开开关”，“1024” 就是 “把缓存设为 1024MB
'''

#绑定端口可选
# udp_socket.bind(('', 8888))#

# 4.发送数据
data="哈喽，你好！"
addr=("127.0.0.1", 56050)#网络助手 UDP 本机端口 所有绑定56050端口的设备都可以收到广播数据
udp_socket.sendto(data.encode("utf-8"), addr)
# 5.关闭socket套接字
udp_socket.close()