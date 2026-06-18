n=int (input("Enter number "))
print(f" n = {n}")
isPrime=True
for i in range (2,n):
    if n%i==0:
        isPrime=False

if (isPrime):
    print(f"{n} is prime number.")
else:
    print(f"{n} is not Prime number")