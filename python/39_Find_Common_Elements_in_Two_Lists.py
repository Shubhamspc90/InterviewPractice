# Find Common Elements in Two Lists

list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]

common = list(set(list1) & set(list2))
print(list1)
print(list2)
print(f" Common Elements in Two Lists: {common}")