#输出
print("Hello,world!")

#输入
#默认输入格式为字符串格式
name=input("请输入名字:")
print("你好,"+name+"!"+str(type(name))) #+号的拼接 数据类型返回需要是字符串所以还得str()一下

age=int(input("请输入年龄:")) #int()函数将字符串转换为整数 不转换就是字符 
print(age,type(age))