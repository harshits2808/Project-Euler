import math

A=[]
n = pow(10,12)-1
k = 5
for i in range (700):
    if(pow(2,i) > n):
        break
    for j in range (300):
        if(pow(2,i)*pow(5,j) > n):
            break;
        A += [pow(2,i)*pow(5,j)]
A = sorted(A)

pow2=0
pow5=0

for i in range (1,700):
    pow2 += math.floor(n/pow(2,i))
    pow5 += math.floor(n/pow(5,i))

f=[0,1]
for i in range (2,pow(10,k)):
    if(i%2 ==0 or i%5 == 0):
        f += [f[i-1]]
    else:
        f += [(f[i-1]*i) % pow(10,k)]

ans = pow(2,pow2-pow5,pow(10,k))

for i in A:
    if(i<=n):
        ans = (ans*f[(n//i) % pow(10,k)])%pow(10,k)

print(ans)

#3629056
