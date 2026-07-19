#  Merge Two Dictionaries

dict1 = { "name":"Shubham"}
dict2 = { "age": 24}
print(dict1)
print(dict2)

Result = dict1|dict2
print("Result:\n",Result)

# alternative 

d1={"subject":"maths"}
d2={"roll":20}

d1.update(d2)
print(d1)
