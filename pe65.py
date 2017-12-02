def sumdig(n):
    s=0
    while(n>0):
        s += n%10
        n//=10
    return s

num=0
den=1
for i in range(100,1,-1):
    if(i%3 ==0):
        a = 2*(i//3)
    else:
        a=1

    num = num + a*den
    t = num
    num = den
    den = t
print(sumdig(num+den*2))
