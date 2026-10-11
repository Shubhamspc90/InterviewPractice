class Student:

    def __init__(self, name):
        self.name = name

    def __str__(self):
        return f"Student Name: {self.name}"


s = Student("Shubham")

print(s)