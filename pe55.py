def ispal(n):
    rev = 0
    num = n
    while(n>0):
        r = n%10;
        rev = rev*10 + r
        n//=10
    if(rev == num):
        return 1
    return 0
count=0
for i in range (10001):
    num = i
    for j in range (50):
        rev = 0
        n = num
        while(n>0):
            r = n%10;
            rev = rev*10 + r
            n//=10
        num = num+rev
        if(ispal(num)==1):
            break
        if(j==49):
            print(i)
            count+=1
print(count)
