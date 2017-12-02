#include "all.h"

long long int a[2001][2001],b[2001],temp[2001][2001],res[2001][2001];

void power(long long int y, long long int mod)
{
	ms(res);
    loop(2001) res[i][i] = 1;     // Initialize result
  
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
        {
			tem
		}
  
        // n must be even now
        y = y>>1; // y = y/2
        mul(a,a);  // Change x to x^2
    }
    return res;
}

int main()
{
	ms(a);ms(b);ms(temp);
	a[0][0]=1;
	a[0][2000]=1;
	a[0][1999]=1;
	b[1]=2000;
	loop(2,2002) b[i]=1;
	
}
