num=int(input("Enter a num "))
s=0
temp=num
while temp>0:
    rem=temp%10
    s=s*10 +rem
    temp//=10
    
if num==s:
    print("Palindrome")
else:
    print("Not Palindrome")