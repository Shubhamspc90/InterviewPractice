class Father:
    def  skills(self):
        print("Driving")
        

class Mother:
    def skills2(self):
        print("Cooking")
        
class Child(Father,Mother):
    pass


obj = Child()

obj.skills()
obj.skills2()