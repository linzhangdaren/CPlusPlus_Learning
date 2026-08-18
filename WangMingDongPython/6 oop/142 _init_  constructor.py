## 自动构造函数__init__

class MacBook:
    def __init__(self, cpu="i5", memory="16G"):  # 自动带参构造函数
        self.cpu = cpu
        self.memory = memory

    def print_info(self):
        print("cpu:", self.cpu)
        print("memory:", self.memory)


my_computer = MacBook("i7", "32G")
my_computer.print_info()
