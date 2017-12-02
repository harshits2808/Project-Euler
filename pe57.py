def isdig(num,den):
    while(den>0):
        num//=10
        den//=10
    if(num>0):
        return 1
    return 0

num=3
den=2
count=0
for i in range (1000):
    num = num+den
    t = num
    num = den
    den = t
    num = num+den
    if(isdig(num,den)==1):
        count+=1
        print(num,"/",den)
print(count)
