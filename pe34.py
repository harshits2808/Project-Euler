import math
sum=0
for i in range (3,10000):
    n = i
    s = 0
    while(n>0):
        r = n%10
        s += math.factorial(r)
        n = n//10
    if(s==i):
        sum += i
print(sum)
