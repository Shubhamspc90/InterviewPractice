class Parent:

    def show(self):
        print("Parent Class")


class Child(Parent):
    pass


obj = Child()

obj.show()