class Dog:

    def sound(self):
        print("Bark")


class Cat:

    def sound(self):
        print("Meow")


for animal in [Dog(), Cat()]:
    animal.sound()