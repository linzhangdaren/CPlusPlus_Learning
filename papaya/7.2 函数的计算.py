# 折扣 运费总金额计算函数
折扣 = 0.6  # 打八折,当此参数挪到总金额的函数里时候即为局部函数
# 再调用折扣的打印输出会报错因为折扣是局部变量
# 如果要升级到全局变量需要加上global关键字
# global 折扣


def 总金额(售价, 运费=2):  # 默认值为2元的运费,如果有传值则使用传值
    return 售价 * 折扣 + 运费


应收款 = 总金额(100)
print(f"实际付款为: {应收款}元,折扣为: {int(折扣*10)}折")
