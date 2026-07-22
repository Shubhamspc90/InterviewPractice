# Count Word Frequency

sentence = "abc  abc  def  ghi xyz xyz xyz"

words = sentence.split()

frequency = {}  # Empty Dictionary
for ch in words:
    frequency[ch] = frequency.get(ch,0)+1
     
print(frequency)