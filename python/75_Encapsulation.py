class Student:

    def __init__(self):
        self.__marks = 90

    def get_marks(self):
        return self.__marks


s = Student()

print(s.get_marks())