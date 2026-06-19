s=input("Enter the sentence  ")
result=""

for ch in s:
    if ch.lower() in "aeiou":
        result+="*"
    else:
        result+=ch
        
print(f"Original sentence => {s}")
print(f"After Replacement => {result}")