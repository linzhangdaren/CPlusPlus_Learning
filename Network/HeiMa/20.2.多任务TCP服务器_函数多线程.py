'''
多任务TCP服务器
1.循环等待接受客户端连接请求
2.客户端和服务器建立连接成功
  a.给每一个客户端初始化一个socket
  b.给每一个客户创建一个线程(守护线程)
  c.每个线程独立处理客户端收发数据
'''
#初始化TCP服务器
import socket
import threading
_BUFFER=2048

#定义一个函数来处理客户端的请求
def handle_client(client_tcp,client_addr):
    while True:
        bytes_data=client_tcp.recv(_BUFFER)#接收客户端发送的数据
        if not bytes_data:
            print("客户端",client_addr,"断开连接")
            client_tcp.close()
            break
        else:                
            client_msg=bytes_data.decode('utf-8')
            print('客户端：',client_addr,'发送消息：',client_msg)



if __name__ == '__main__':
    #创建socket服务器
    tcp_server_socket=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    #想让别人连接进来需要绑定ip和端口 ,不写IP那么所有ip都可以使用
    tcp_server_socket.bind(('', 8080))
    #socket设置为被动监听模式
    tcp_server_socket.listen(128)
    print('服务器启动成功，等待客户端连接...')
    
    while True:
        client_tcp,client_addr=tcp_server_socket.accept()
        print('客户端连接成功，地址：',client_addr)
    
        #创建线程处理客户端请求
        # handle_client(client_tcp,client_addr)#直接调用只能一个一个用
        client_thread=threading.Thread(target=handle_client,args=(client_tcp,client_addr))#创建线程
        client_thread.setDaemon(True)#设置为守护线程，主线程结束后，子线程也会结束
        client_thread.start()#启动线程
    

