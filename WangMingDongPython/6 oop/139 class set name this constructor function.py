## 类似构造函数但是不是自动的
class Cat:
    def set_name(self, name, age):
        self.name = name
        self.age = age

    def info(self):
        print("我的名字是%s，我今年%d岁。" % (self.name, self.age))

    def eat(self):
        print("%s正在吃饭." % self.name)  # 一个可以不写括号

    def sleep(self):
        print("%s正在睡觉." % (self.name))

    def drink(self):
        print("%s正在喝水." % (self.name))

    def play(self):
        print("%s正在玩耍." % (self.name))


cat1 = Cat()
cat1.set_name("小白", 2)
cat1.info()
cat1.eat()
cat1.sleep()
cat1.drink()
