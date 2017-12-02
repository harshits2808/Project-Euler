import math

def ncr(n,r):
    return math.factorial(n)//math.factorial(r)//math.factorial(n-r)

sum =0
n=3
for n in range(3,17):
    for x in range(1,n):
        for y in range(1,n):
            for z in range(1,n):
                if(x+y+z <= n):
                    s = x+y+z
                    t = ncr(n,s)*ncr(s,x)*ncr(y+z,y)*pow(13,n-s)
                    sum += t
            
    for x in range (1,n-1):
        for y in range (1,n-1):
            if(x+y<=n-1):
                s = x+y
                t = ncr(n-1,s)*ncr(s,x)*pow(14,n-1-s)
                sum -= t
            
print(sum)
