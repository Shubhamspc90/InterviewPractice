str=input("Enter String  ")
freq={}
for ch in str:
    if ch in freq:
        freq[ch]+=1
    else:
        freq[ch]=1

print(freq)
      
for key,value in freq.items():
    if value==1:
        print(key)
        break;
   

        
    
    
    
