import math
c=0
for i in range (1,101):
    for j in range (i+1):
        if(math.factorial(i)//math.factorial(j)//math.factorial(i-j) > 1000000):
            c+=1
print(c)
