def factorial(n):
    if n==0 or n==1:
        return 1
    return n*factorial(n-1)

num=int(input("Enter a number\t"))   
fact=factorial(num)
print(f"factorial of {num} is {fact}")