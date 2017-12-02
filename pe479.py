sum=0
for i in range (1,5):
    n = i*i - 1
    num = n*(pow(n,4)-1)
    print(num)
    sum += num
print(sum)
