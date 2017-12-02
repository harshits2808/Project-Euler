def sumd(n):
    s=0;
    while(n>0):
        r=n%10
        s += r
        n//=10
    return s
m=0
for i in range (100):
    for j in range (100):
        if(sumd(pow(i,j)) > m):
            m=sumd(pow(i,j))
            if(m==972):
                print(i," ",j)
print(m)
