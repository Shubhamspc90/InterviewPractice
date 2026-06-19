#  # method 1
# str=input("Enter the string")
# freq={}
# for ch in str:
#     freq[ch] = freq.get(ch, 0) + 1
        
# print(freq)


#  #  method 2
str = input("Enter string: ")
freq={}
 
for ch in str:
    if ch in freq:
        freq[ch]+=1
    else:
        freq[ch]=1
        
print(freq)
        
