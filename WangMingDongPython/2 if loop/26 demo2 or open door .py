# or 或案例2：开门案例

person = input("请问你是谁:(老板/领导/员工/访客)")
print("正在验证")
print(person == "老板" or person == "领导 or person==员工")
# 不能用and，因为and是短路运算符，只有前面的条件为真时，才会计算后面的条件
