class Person:
    def __init__(self, name):
        self.name = name
        self.gun = None  # 初始化没有枪
        self.hp = 100  # 初始化血量为100

    def install_bullet_to_clip(self, bullet, clip):
        clip.add_bullet(bullet)  # 装子弹到弹夹

    def install_clip_to_gun(self, clip, gun):
        gun.add_clip(clip)  # 装弹夹到枪

    def get_gun(self, gun):
        self.gun = gun  # 拿到枪

    def pull_trigger(self, enemy):
        if self.gun and self.gun.clip and self.gun.clip.bullet_list:
            self.gun.fire(enemy)
        else:
            if not self.gun:
                print(f"{self.name}没有枪")
            elif not self.gun.clip:
                print(f"{self.name}的枪上没有弹夹")
            else:
                print(f"{self.name}的弹夹内没有子弹")

    def lose_hp(self, hp):
        if self.hp > 0:
            self.hp -= hp
            print(f"{self.name}掉血了，当前血量: {self.hp}")
            if self.hp <= 0:
                print(f"{self.name}已经挂掉")
        else:
            print(f"{self.name}已经挂了")


class Gun:
    def __init__(self, name):
        self.name = name
        self.clip = None

    def add_clip(self, clip):
        self.clip = clip  # 装入弹夹

    def fire(self, enemy):
        temp_bullet = self.clip.pop_bullet()  # 弹出一颗子弹
        if temp_bullet:
            enemy.lose_hp(temp_bullet.power)  # 敌人掉血
            print(f"{self.name}击中敌人，敌人剩余血量: {enemy.hp}")
        else:
            print("弹夹内没有子弹")

    def __str__(self):
        if self.clip:
            return f"枪名: {self.name}, 弹夹容量: {self.clip.bullet_max_num}, 弹夹内子弹: {self.clip}"
        else:
            return f"枪名: {self.name}, 弹夹为空"


class Clip:
    def __init__(self, bullet_max_num):
        self.bullet_max_num = bullet_max_num
        self.bullet_list = []

    def add_bullet(self, bullet):
        if len(self.bullet_list) < self.bullet_max_num:
            self.bullet_list.append(bullet)
        else:
            print("弹夹已满，无法添加子弹")

    def pop_bullet(self):
        if self.bullet_list:
            return self.bullet_list.pop()
        else:
            print("弹夹内没有子弹")
            return None

    def __str__(self):
        if self.bullet_list:
            return f"当前有{len(self.bullet_list)}颗子弹, 子弹威力是{self.bullet_list[0].power}"
        else:
            return "当前没有子弹"


class Bullet:
    def __init__(self, power):
        self.power = power  # 子弹的威力


# 创建一个人(老王)
laowang = Person("老王")
# 创建一个枪(AK47)
ak47 = Gun("AK47")
# 创建一个弹夹，容量10颗子弹
clip = Clip(10)
# 创建一个子弹，杀伤力50
bullet = Bullet(50)

# 老王把子弹上膛
laowang.install_bullet_to_clip(bullet, clip)

# 老王把弹夹装到枪上
laowang.install_clip_to_gun(clip, ak47)
print(ak47)  # 输出枪的信息

# 老王拿枪
laowang.get_gun(ak47)

# 创建一个敌人
enemy = Person("敌人")

# 老王向敌人扣动扳机
laowang.pull_trigger(enemy)
