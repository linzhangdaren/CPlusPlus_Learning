#异常捕获 写入文件 出现异常文件占用的问题

def write_file():
    f=open("测试异常.txt","w",encoding="utf-8")
    try:
        a=1/0
        f.write(a)
        print("写入成功!")
    except Exception as e:#Exception是所有报错的鼻祖啥错都能报出
        print("出现异常",e,type(e))
    finally:
        f.close()
        print("关闭资源")
if __name__ == '__main__':
    write_file()

