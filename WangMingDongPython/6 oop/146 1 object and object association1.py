## 对象之间的关联 object and object association
# 班与学生之间的关联 老师与学生之间的关联...等等

# 学生在教室里面:
# 需要在教室里创建一个学生的属性
# 让其学生属性指向学生对象


# 1. 直接在班级对象里创建学生对象
class ClassRoom:
    def __init__(self, name):
        self.name = name


class Student:
    def __init__(self, name):
        self.name = name


class205 = ClassRoom("205班")  # 班级对象
stu = Student("鹏华")  # 学生对象

# 1.不好的方法:在班的对象里单独加上一个学生对象名
class205.student = stu
print(class205.student.name)  # 输出鹏华
