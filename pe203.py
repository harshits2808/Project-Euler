import math

def ncr(n,r):
    return math.factorial(n)//math.factorial(r)//math.factorial(n-r)

primes = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]

def checksf(n):
    for i in primes:
        if(n%(i*i)==0):
            return 0
    return 1

sfn = []
for i in range (1,51):
    for j in range (i+1):
        num = ncr(i,j)
        if(checksf(num)):
            sfn+=[num]

sfn=sorted(sfn)
sum = sfn[0]
j = sfn[0]
for i in sfn:
    if(i!=j):
        sum+=i
        j=i
print(sum)
