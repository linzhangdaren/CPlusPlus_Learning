def index_error(index):
    lst=[1,2,3,4,5]
    try:
        rst=lst[index]
        print(rst)
    except Exception as e:
        print("发生异常:", e, type(e),"请重新输入")
        
    finally:
        print("程序结束")
    
if __name__ == '__main__':
    index_error(7) # 