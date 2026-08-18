# # 删除 strip() 方法 去除字符串两端的空格

# name = "    love"  # 前有空格 strip()去除
# name_strip = name.strip()
# print(name_strip)  # love

# # partition() 方法 切分字符串
# name2 = " a hello a world"
# name2_part = name2.partition("a")  # 从左到右第一个
# print(name2_part)  # (' ', 'a', ' hello a world')

# # splitlines() 方法 按行分割字符串
# name3 = "abcdefg\nhijklmn\nopqrstuvwxyz"
# print(name3)  # 没切之前
# name3_splitlines = name3.splitlines()  # 按行分割
# print(name3_splitlines)  # 切割之后['abcdefg', 'hijklmn', 'opqrstuvwxyz']
# # 这种中括号是列表的形式

# isdigit()判断是否为纯数字
# name4 = input("请输入您的名字：")
# name4 = int(name4)
# print(name4)  # 输入字母会崩溃报错
# 为了防止以上情况发生所以要用 isdigit()进行判断name4变量里面是否为纯数字
# name4 = input("请输入您的名字：")
# if name4.isdigit():  # 如果不是纯数字就不转换,是的话就转换为int类型
#     name4 = int(name4)
#     print("提示:已转换字符为数字")
# print(name4)  # 输入字母会崩溃报错

# 判断总结：
# isdigit()判断是否为纯数字
# isalpha()判断是否为纯字母
# isdigit()判断是否为纯数字
# isalnum()判断是否为字母或数字

##join()方法 合并字符串
##用某种符号把字符串列表给合并串联起来
name5_join = "_"  # " "用空格连接就是普通一句话
name5 = ["hello", "world"]
name5_return = name5_join.join(name5)
# 语法:连接符("_")+join()+列表("hello","world")
print(name5_return)  # hello_world
