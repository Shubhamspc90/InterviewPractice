number = [1,3,2,2,6,1]

dup={}

for num in number:
    dup[num]=dup.get(num,0)+1
    
print(dup)



grade=["A","B","C","B","A","B"]

gra={}

for i in grade:
    gra[i]=gra.get(i,0)+1
    
print(gra)