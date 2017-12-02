a = 1
b = 1
k = 2
import math
def check(n):
    a = 9*[0]
    for i in range(9):
        if(n%10 == 0):
            return 0
        if(a[n%10-1] == 1):
            return 0
        a[n%10-1] += 1
        n//=10
    return 1

def last(n):
    n = n%1000000000
    return check(n)

def first(n):
    t = n
    num = 0;
    while(t>0):
        num+=1
        t//=10
    n = math.floor(n//(pow(10,num-9)))
    return check(n)
while(1>0):
    n = a+b
    a = b
    b = n
    k += 1
    if(last(n) == 1):
        if(first(n) == 1):
            print(k)
