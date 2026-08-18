# 子类调用父类的构造函数
class Father(object):
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):
        return "%s的年龄是:%d" % (self.name, self.age)


class Son(Father):
    def __init__(self, name, age, collage):
        super().__init__(name, age)  # 调用父类的构造函数
        self.collage = collage

    def __str__(self):
        return "%s的年龄是:%d, 他的学历是:%s" % (self.name, self.age, self.collage)


father = Father("父亲", 50)
print(father)

son = Son("儿子", 18, "大学")
print(son)
