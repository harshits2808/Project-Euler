#include "all.h"

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
