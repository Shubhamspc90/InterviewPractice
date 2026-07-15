# Find Pair with Given Sum

#  method 1   O(n^2) 
numbers = [2, 7, 11, 15]
target = 9
for i in range(len(numbers)):
    for j in range(i+1,len(numbers)):
        if numbers[i]+numbers[j]==target:
            print(numbers[i],numbers[j])
            
            
            
# method 2   O(n)  Find Pair with Given Sum
numbers = [2, 7, 11, 15]
target = 18

seen = set()
for num in numbers:
    complement = target-num
    
    if complement in seen:
        print(complement,num)
        
    seen.add(num)
        
        
