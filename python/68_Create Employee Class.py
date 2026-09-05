class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        
    def show(self):
        print(self.name , self.salary)
            
            
e1 = Employee("Shubham Chauhan",500000)
e1.show()
            
        