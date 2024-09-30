## this指针
class Cat:
    def info(self, name, age):
        print("我的名字是%s，我今年%d岁。" % (name, age))

    def eat(self, name):
        print("%s正在吃饭." % name)  # 一个可以不写括号

    def sleep(self, name):
        print("%s正在睡觉." % (name))

    def drink(self, name):
        print("%s正在喝水." % (name))


cat1 = Cat()
cat1.info("小白", 2)
cat1.eat("小白")

cat2 = Cat()
cat2.info("小黑", 3)
cat2.sleep("小黑")

