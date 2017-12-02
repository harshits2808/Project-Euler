def digsum(n):
    sum=0
    while(n>0):
        sum += n%10
        n = n//10
    return sum

def nodig(n):
    ans=0
    while(n>0):
        ans+=1
        n = n//10
    return ans

import math

def sq(n):
    k = int(math.sqrt(n))
    if(k*k == n):
        return 1
    return 0;

ans=0
for n in range (2,3):
    if(n==4 or n==9 or n==16 or n==25 or n==36 or n==49 or n==64 or n==81):
        continue
    a=5*n
    b=5
    c=0
    while(nodig(b) < 120):
        if(a>=b):
            a = a-b
            b = b+10
        else:
            a = a*100
            b = b-5
            b = b*10
            b = b+5
        c+=1
    print(b)
    while(nodig(b)>100):
        b= b//10
    ans += digsum(b)
    #print(ans)
print(ans)
