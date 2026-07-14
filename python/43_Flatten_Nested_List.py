# Flatten Nested List

nested = [[1,2],[3,4],[5,6],[7,8]]

flat = []

for subset in nested:
    for num in subset:
        flat.append(num)
   
   
print(nested)     
print(flat)