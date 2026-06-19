#  #  method 1
# s1 = input("Enter 1st string  ")
# s2 = input("Enter 2nd string  ")

# if sorted(s1) == sorted(s2):
#     print("Anagram")
# else:
#     print("Not Anagram")
    
 # method 2
s1 = input("Enter 1st string: ")
s2 = input("Enter 2nd string: ")

if len(s1) != len(s2):
    print("Not Anagram")
else:
    freq = {}

    for ch in s1:
        freq[ch] = freq.get(ch, 0) + 1

    for ch in s2:
        if ch not in freq:
            print("Not Anagram")
            break
        freq[ch] -= 1
    else:
        if all(value == 0 for value in freq.values()):
            print("Anagram")
        else:
            print("Not Anagram")   