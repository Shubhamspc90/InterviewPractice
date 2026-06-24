
## # longest word in sentence 
sentence=input("Enter a sentence  ")
word=sentence.split()
longest=max(word,key=len)
print(sentence)
print(f"longest word -> {longest}")

# sortest word in sentence 

sentence = input("Enter a sentence  ")
word=sentence.split()
sortest=min(word,key=len)
print(sentence)
print(f"sortest word ->  {sortest}")