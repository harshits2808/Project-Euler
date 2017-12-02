import math
for i0 in range (10):
    for i1 in range (10):
        for i2 in range (10):
            for i3 in range (10):
                for i4 in range (10):
                    for i5 in range (10):
                        for i6 in range (10):
                            for i7 in range (10):
                                s = 10203040506070809
                                s += i0*1000000000000000 + i1*10000000000000 + i2*100000000000 + i3*1000000000 + i4*10000000 + i5*100000 + i6*1000 + i7*10
                                sq = math.sqrt(s)
                                if(sq*sq == s):
                                    print(sq)
