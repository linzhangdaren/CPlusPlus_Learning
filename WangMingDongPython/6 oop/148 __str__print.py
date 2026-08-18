## 输出打印转换 __str__方法


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

    # 打印弹夹信息 __str__方法
    def __str__(self):
        return "当前有%d颗子弹,子弹威力是%d" % (
            len(self.bullet_list),
            self.bullet_list[0].power,
        )


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

# 5.1 打印子弹列表
# print(clip.bullet_list)  # 输出：[<__main__.Bullet object at 0x0000021DD5FAB1D0>]
# 加上__str__方法后 直接输出对象就行 str自动return对象信息
print(clip)  # 输出：当前有1颗子弹
