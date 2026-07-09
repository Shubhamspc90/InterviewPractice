#  Sort List Without sort()

l1 = [9,2,5,3,1,8,6,7,4]
n=len(l1)
print(f"before sorting: {l1}")
print(f"length of list: {n}")

for i in range(n):
    for j in range (n-i-1):
        if ( l1[j] >l1[j+1] ):
            l1[j],l1[j+1]=l1[j+1],l1[j]
            
print(f"After sorting: {l1}")