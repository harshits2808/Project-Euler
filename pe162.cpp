#include "all.h"

int main()
{
	ull sum = 0;
	ull n = 16;
	for(ull x=1;x<n;x++)
		for(ull y=1;y<n;y++)
			for(ull z=1;z<n;z++)
				if(x+y+z <= n)
				{
					ull s = x+y+z;
					ull t = fact(n)/fact(x)/fact(y)/fact(z)/fact(n-s);
					t = t*power(13,n-s);
					sum += t;
				}
	
	for(ull x=1;x<n-1;x++)
		for(ull y=1;y<n-1;y++)
			if(x+y<=n-1)
			{
				ull s= x+y;
				ull t = fact(n-1)/fact(n-1-s)/fact(x)/fact(y);
				t = t*pow(14,n-1-s);
				sum -= t;
			}
	
	cout<<sum;
}

