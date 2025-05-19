#直接运行这个文件，__name__变量的值为__main__。
#被其他文件导入，则__name__变量的值为:name_main.py


#如果不想让一个文件被其他文件调用直接运行，可以加上if __name__ == '__main__':的判断语句。
if __name__ == '__main__':#入口函数
    print("我是被导入者name_main.py")
    print("如果这个文件被当成包的话这里最好不要有输出print的语句")
    print("*"*20)
    print(__name__)#输出__main__
    print("*"*20)
