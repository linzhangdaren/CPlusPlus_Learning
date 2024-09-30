##静态函数 纯打印用户菜单，不涉及计算逻辑
# 不用写self参数，直接通过类名调用
class Calculator(object):
    """计算器类"""

    def __init__(self):
        # 定义2个默认值
        self.num1 = 0
        self.num2 = 0

    @staticmethod
    def show_menu():
        """因为打印菜单功能方法并不需要self指向的对象，所以就考虑使用静态方法"""
        print("    东哥牌计算机 V2021.6")
        print("1. 加法")
        print("2. 减法")
        print("3. 乘法")
        print("4. 除法")
        print("5. 退出")

    def get_nums(self):
        self.num1 = int(input("请输入第1个数:"))
        self.num2 = int(input("请输入第2个数:"))

    def add(self):
        print(self.num1 + self.num2)

    def min(self):
        print(self.num1 - self.num2)

    def mul(self):
        print(self.num1 * self.num2)

    def div(self):
        print(self.num1 / self.num2)

    def run(self):
        while True:
            self.show_menu()
            op = input("请输入要进行的操作:")
            if op == "1":
                self.get_nums()
                self.add()
            elif op == "2":
                self.get_nums()
                self.min()
            elif op == "3":
                self.get_nums()
                self.mul()
            elif op == "4":
                self.get_nums()
                self.div()
            elif op == "5":
                break


# 创建一个计算器对象
cal = Calculator()
# 调用计算器的运行方法
cal.run()
