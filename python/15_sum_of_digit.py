num=int(input("Enter a number  "))
n=num
sum=0
while(num>0):
    rem=num%10
    sum+=rem
    num//=10

print(f"Sum of {n} is {sum}")
