#异常捕获 finally可以确保代码执行完毕，以防网络占用无法断开导致卡死

def read_file():
    
    a=10
    b=0
    
    try:#测试以下代码如果出错
        rst=a/b
        print(rst)
        print("计算之后正常运行代码")
        # print("1.关闭资源")#关闭资源第一次
        return rst
    except:#出现问题 那就报异常
        print("出现异常")
        # print("2.关闭资源")#关闭资源第二次
    finally:#无论对错 都会执行
        print("3.关闭资源")
        #关闭资源一次就够 无论怎样都会执行省去前两次陈余代码
if __name__ == '__main__':
    rst=read_file()

