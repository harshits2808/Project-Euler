#https://www.alpertron.com.ar/QUAD.HTM

b=15
n=21
while(n < pow(10,12)):
    tn = 3*n + 4*b -3
    tb = 2*n + 3*b -2
    b=tb
    n=tn
print(b," ",n)
