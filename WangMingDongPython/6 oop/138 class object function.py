##
class Cat:
    def info(self, name, age):
        print("我的名字是%s，我今年%d岁。" % (name, age))

    def eat(self):
        print("我正在吃饭.")

    def sleep(self):
        print("我正在睡觉.")

    def drink(self):
        print("我正在喝水.")


cat1 = Cat()
cat1.info("小白", 2)
cat1.eat()

cat2 = Cat()
cat2.info("小黑", 3)
cat2.sleep()
