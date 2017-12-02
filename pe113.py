import math
sum=277032
for dig in range (11,101):
    sum += math.factorial(dig+8)//math.factorial(dig)//math.factorial(8)
    sum += math.factorial(dig+9)//math.factorial(dig)//math.factorial(9)
    sum -= 10
print(sum)
