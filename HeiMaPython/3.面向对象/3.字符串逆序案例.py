'''
题目: 统计字符串 长度不超过30
输入字符串:"xxxxxx.."
输出:
长度:x
逆序后:".xxxxx"
字符统计结果:z:1次,x:6次,.:2次...
'''

#判断输入字符长度不超过30
while 1:
    s=input("请输入字符串:")
    if len(s)>30:
        print(f"您输入了{len(s)}个字符,请重新输入(不超过30个字符)")
    else:
        break
print("您输入的字符串为:",s)

#输出长度
s_len=len(s)
print("长度:",s_len)

#输出逆序
s_reverse=s[::-1]
print("逆序后:",s_reverse)

#输出字符统计结果
s_count={}
for i in s:
    if i in s_count:
        s_count[i]+=1
    else:
        s_count[i]=1
print("字符统计结果:",s_count)

#使用列表推导式将字典键值对转换为特定格式字符串列表
s_count2 = [f"{k}:{v}次" for k, v in s_count.items()]
print("字符统计结果:",s_count2)

#使用join方法将字符串列表连接为一个字符串，并以空格分隔
s_count3 = " ".join(s_count2)
#join将列表转换为字符串,split()将字符串转换为列表
print("字符统计结果:",s_count3)