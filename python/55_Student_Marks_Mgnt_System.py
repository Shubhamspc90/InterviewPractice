# Student Marks Management System 

student = {}  # empty dict

n = int(input("Enter no . of student you want to store\t"))

for i in range(n):
    name = input("Enter Name: ")
    marks = int(input("Enter Marks: "))
    student[name]=marks;
    
for name,marks in student.items():
    print(name,":",marks)
    

topper = max(student , key= student.get)
    
print(f"Topper: {topper}")