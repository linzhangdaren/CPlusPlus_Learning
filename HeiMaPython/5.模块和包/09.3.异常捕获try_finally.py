#except就不写 管他错误与否

'''
try-except           没有需要关闭的资源
try-except-else      没有异常时执行的代码
try-finally          需要关闭的资源
try-except-finally   需要关闭的资源并且想看报错信息

'''
def write_file():
    f=open("测试异常.txt","w",encoding="utf-8")
    try:
        a=1/0
        f.write(a)
        print("写入成功!")
    except Exception as e:#Exception是所有报错的鼻祖啥错都能报出
        print("出现异常",e,type(e))
    else:#没啥用 放try里效果一样
        print("没有异常")
    finally:
        f.close()
        print("关闭资源")
if __name__ == '__main__':
    write_file()

