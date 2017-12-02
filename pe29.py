A=[]
for a in range(2,101):
    for b in range (2,101):
        A += [pow(a,b)]
A=sorted(A)
c=1
for i in range(1,9801):
    if(A[i]==A[i-1]):
        continue;
    c+=1;
print(c)
