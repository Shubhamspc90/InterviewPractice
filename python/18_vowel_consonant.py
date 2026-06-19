str=input("Enter a string  ").lower()
vowel=0
consonant=0
for ch in str:
    if ch.isalpha():      
        if ch in "aeiou":
                vowel=vowel+1
        else:
                consonant=consonant+1
        
print(f"Original string -> {str}")
print(f"Vowel -> {vowel}")
print(f"Consonant -> {consonant}")
