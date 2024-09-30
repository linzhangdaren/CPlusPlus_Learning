## 老王开枪打敌人 框架
class Person:
    def __init__(self, name):
        self.name = name


class Gun:
    def __init__(self, name):
        self.name = name


class Clip:
    # 容量10
    def __init__(self, bullet_max_num):
        self.bullet_max_num = bullet_max_num


class Bullet:
    def __init__(self, power):
        self.power = power  # 子弹的威力


# 1. 创建一个人(老王)
laowang = Person("老王")
# 2. 创建一个枪(AK47)
ak47 = Gun("AK47")
# 3. 创建一个弹夹 容量10颗子弹
clip = Clip(10)
# 4.创建一个子弹 杀伤力50
bullet = Bullet(50)
