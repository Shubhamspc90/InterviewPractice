# Character Frequency 
 
string = "programming"
frequency = {}

for ch in string:
    frequency[ch] = frequency.get(ch,0)+1
    
print(frequency)
