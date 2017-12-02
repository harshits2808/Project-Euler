#include "all.h"

bool is_cube(long long int n)
{
	long long int c = cbrt(n);
	if(c*c*c == n) return 1;
	c++;
	if(c*c*c == n) return 1;
	c-=2;
	if(c*c*c == n) return 1;
	return 0;
}

int main()
{int ans=0;
	for(int i=2;i<ten6;i++)
	{
		if(isprime(i)==0) continue;
		for(ll j=1;3*j*j<i;j++)
		{
			ll n = pow(j,3);
			if(is_cube(n+i)) ans++;
		}
	}
	cout<<ans;
}
