# Find Duplicate Elements

numbers = [1, 2, 2, 3, 4, 4, 5]

duplicate=[]
for num in numbers:
    if numbers.count(num)>1 and  num not in duplicate:
        duplicate.append(num)
        
        
print(numbers)
print("duplicate",duplicate)
