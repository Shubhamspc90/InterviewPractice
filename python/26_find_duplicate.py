# # method 1 
# s=input("enter the string  ")
# duplicate =set()
# for ch in s:
#     if s.count(ch)>1:
#         duplicate.add(ch)
  
# print(s)      
# print(duplicate)

#  # method 2
s=input("enter the string  ")
duplicate =[]
for ch in s:
    if s.count(ch)>1 and ch not in duplicate:
        duplicate.append(ch)
  
print(s)      
print(duplicate)