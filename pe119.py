def digsum(n):
    ans = 0
    while(n>0):
        ans += n%10
        n = n//10
    return ans

A = [[pow(y,x) for x in range(100)] for y in range(100)]
ans = [0]
for i in range(100):
    for j in range(100):
        n = A[i][j];
        if(digsum(n)==i):
            if(n>10):
                ans += [n]

ans = sorted(ans)
print(ans[30])
        
