d=0
m=0
while(d<1000):
    d+=1
    if(d%2 == 0 or d%5 == 0):
        continue;
    num=9
    n=2
    while(num % d != 0):
        num = pow(10,n)-1
        n+=1
    if(m < n):
        m=n
        mnum = d
print(mnum)
    
    
