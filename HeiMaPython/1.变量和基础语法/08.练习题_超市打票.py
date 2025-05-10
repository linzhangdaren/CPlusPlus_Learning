""""
超市买苹果计算金额
需求:	
● 收银员输入苹果的价格price，单位：元/斤
● 收银员输入用户购买苹果的重量weight，单位：斤
● 计算并输出付款金额:xxx元
"""

price=float(input("请输入苹果单价(元/斤):"))
weight=float(input("请输入购买重量(斤):"))
RMB=price*weight
print(f"应付金额为:{RMB:.2f} 元")


