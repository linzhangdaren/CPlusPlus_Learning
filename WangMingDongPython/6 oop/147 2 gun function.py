## 子弹上膛
# 5.老王把子弹上膛


class Person:
    def __init__(self, name):
        self.name = name

    def install_bullet_to_clip(self, bullet, clip):  # 老王把子弹装进弹夹
        clip.add_bullet(bullet)  # 装子弹到弹夹 函数调用


class Gun:
    def __init__(self, name):
        self.name = name


class Clip:
    # 容量10
    def __init__(self, bullet_max_num):
        self.bullet_max_num = bullet_max_num
        self.bullet_list = list()  # 定义列表储存子弹

    def add_bullet(self, bullet):  # 弹夹存储子弹
        self.bullet_list.append(bullet)


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

# 5.老王把子弹上膛
laowang.install_bullet_to_clip(bullet, clip)
