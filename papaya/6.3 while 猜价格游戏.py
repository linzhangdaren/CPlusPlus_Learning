商品价格=1000
玩家A=input("请输入玩家A的名字：")
玩家B=input("请输入玩家B的名字：")
回答次数=1
回答总次数=3
while 回答次数<=回答总次数:
    A答案=input(f"{玩家A}，请输入你想出的价格：")
    B答案=input(f"{玩家B}，请输入你想出的价格：")
    if A答案==商品价格:
        print(f"{玩家A}，猜对了！")
        break
    elif B答案==商品价格:
        print(f"{玩家B}，猜对了！")
        break
    elif abs(商品价格-int(A答案))<abs(商品价格-int(B答案)):
        print(f"{玩家A}，你赢了！")
    else:
        print(f"{玩家B}，你赢了！")
    回答次数+=1
        
        