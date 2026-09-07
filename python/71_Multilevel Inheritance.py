class GrandParent:

    def grand(self):
        print("Grand Parent")


class Parent(GrandParent):

    def parent(self):
        print("Parent")


class Child(Parent):

    def child(self):
        print("Child")


obj = Child()

obj.grand()
obj.parent()
obj.child()