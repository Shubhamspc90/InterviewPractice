
#  second largest program 

my_list=[2,4,3,6,9,7,5,8]
print(f"Original list: {my_list}")

result=sorted(my_list)
print(f"after sorting {result}")
print(f"Second largest: {result[-2]}")