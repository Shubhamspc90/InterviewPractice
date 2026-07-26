# Most Frequent Character

string = "aabbbbbbccc"

freq ={}

for ch in string:
    freq[ch] = freq.get(ch , 0)+1
    
most = max(freq , key=freq.get)

print(string)
print(freq)
print(most)