str=input("Enter a string  ")
reversed_str=str[::-1]

print(f"Original String is {str}")
print(f"Reversed String is {reversed_str}")

if str==reversed_str:
    print("Palindrome")
else:
    print("Not Palindrome")
