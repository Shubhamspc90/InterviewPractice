n=int(input("enter a number"))
print(f"before reversed {n}")
rev=0
while n>0:
    digit=n%10
    rev=rev*10 + digit
    n//=10
    
print(f"after reversed {rev}")