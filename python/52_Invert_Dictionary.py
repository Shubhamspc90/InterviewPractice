# Invert Dictionary

Student = {
    1 : "A",
    2 : "B",
    3 : "C",
    4 : "D",
    5 : "E"
}

print(f"\nOriginal Dict: {Student}")

invert_dict= {}  

for key,value in Student.items():
    invert_dict[value] = key
     
print(f"After inverse : {invert_dict}\n")