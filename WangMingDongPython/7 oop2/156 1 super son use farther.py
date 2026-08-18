##super(). 子类调用父类的东西
# 子类包括父类的内容


class Father(object):
    def play_game(self):
        print("父类 玩红斗罗")
        print("父类 玩超级玛丽")

    def drink(self):
        print("父类中的drink方法")


class Son(Father):
    def play_game(self):
        print("子类 玩魔兽世界")
        # 调用父类的play_game方法
        super().play_game()  # 直接调用了父类的play_game方法，而不是子类的


father = Father()
# father.play_game()  # 调用父类中的方法，因为对象是父类创建的

son = Son()
son.play_game()  # 调用子类中的方法，因为在子类中重写了play_game方法
# son.drink()  # 调用父类中的方法，因为子类中并没有重写此方法
