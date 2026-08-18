##私有方法 bank 银行取款
class BankService(object):
    def __bank_2_bank(self, money):  # 私有方法
        print("这里是一行之间的转账代码....")
        return True

    def transfer(self):  # 公有方法
        money = int(input("请输入转账金额"))
        if money > 100000:
            if self.__bank_2_bank(money):
                print("转账成功")
            else:
                print("转账失败...")
        else:
            print("都没钱，还转什么啊！自己留着花吧!")


bank_service = BankService()
bank_service.transfer()  # 可以调用，是公有方法
