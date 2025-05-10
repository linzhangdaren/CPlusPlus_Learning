a=5
b=2

# 基础运算
print(a+b)
print(a-b)
print(a*b)
print(a/b)#带小数的除法
print(a//b)#整除
print(a%b)#餘數
print(a**b)#次方 幂..
print(a**0.5)#平方根

# 字符拼接
user_name="鹏华"
pwd="123455"
print(user_name+pwd)

print("用户名："+user_name+" 密码："+pwd)
print("用户名：%s 密码：%s"%(user_name,pwd))
print(f"用户名：{user_name} 密码：{pwd}")#f-string 格式化字符串

#字符串和数字相乘(无法拼接)
print(user_name*3)#重复三次 鹏华鹏华鹏华