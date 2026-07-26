# Find Duplicate Elements Using Dictionary

lst = [1,2,4,1,3,2,5]
print(lst)
freq = {}

for ch in lst:
    freq[ch] = freq.get(ch,0)+1

print(freq)
for key,values in freq.items():
    if values>1:
        print(key)
    