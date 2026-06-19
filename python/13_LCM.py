import math
a=int(input("Enter 1st number  "))
b=int(input("Enter 2nd number  "))

lcm=(a*b)//math.gcd(a,b)
print(f" The LCM of {a} and {b} is {lcm}")