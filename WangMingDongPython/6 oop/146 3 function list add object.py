## 对象之间的关联 object and object association
# 班与学生之间的关联 老师与学生之间的关联...等等

# 学生在教室里面:
# 需要在教室里创建一个学生的属性
# 让其学生属性指向学生对象


# 3. 通过列表让一个班类关联多个学生对象
class ClassRoom:
    def __init__(self, name):
        self.name = name
        self.students = list()  # 班级对象里添加学生对象属性

    def add_student(self, new_student):
        # self.student = new_student  # 班级对象里添加学生对象属性
        self.students.append(new_student)  # 通过列表添加学生对象属性


class Student:
    def __init__(self, name):
        self.name = name


# 创建班和学生对象
class205 = ClassRoom("205班")  # 班级对象
stu = Student("张鹏华")  # 学生对象
stu1 = Student("李明")  # 学生对象2

# 手动一个一个把学生对象添加到班级对象里
class205.add_student(stu)  # 班级对象里添加学生对象属性
class205.add_student(stu1)

# 3. 通过列表让一个班类关联多个学生对象
# 遍历现有学生列表
for temp in class205.students:
    print(temp.name)  # 输出张鹏华

# 创建学生对象3然后直接添加到班级列表里
class205.students.append(Student("李四"))  # 通过列表添加学生对象属性
for temp in class205.students:
    print(temp.name)


# # 2.通过类方法关联对象
# class205.add_student(stu)  # 班级对象里添加学生对象属性
# print(class205.student.name)  # 输出张鹏华


# #1.不好的方法:在班的对象里单独加上一个学生对象名
# class205.student = stu
# print(class205.student.name)  # 输出张鹏华
