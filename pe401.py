mod = 1000000000
high = 1000000000000000

def sqsum(n):
    a = n
    b = n+1
    c = 2*n+1
    if(a%2==0):
        a = a//2
        if(a%3 == 0):
            a = a//3
        elif(b%3 == 0):
            b = b//3
        elif(c%3 == 0):
            c = c//3
    else:
        b = b//2
        if(a%3 == 0):
            a = a//3
        elif(b%3 == 0):
            b = b//3
        elif(c%3 == 0):
            c = c//3
    ans = a%mod
    ans = (ans*b)%mod
    ans = (ans*c)%mod

    return ans

import math

sum = 0
i=1
while(i<=high):
    n = math.floor(high//i)
    r = math.floor(high//n)
    c = r - i + 1
    n = n%mod
    a = sqsum(i+c-1) - sqsum(i-1)
    a = a%mod
    a = (a*n)%mod
    sum = (sum + a)%mod
    i = i+c
print(sum)
