def nodig(n):
    c=0
    while(n>0):
        c+=1
        n//=10
    return c

count=0
tcount=1
for i in range (100):
    for j in range (10):
        if(nodig(pow(j,i)) == i):
            count+=1
print(count)
