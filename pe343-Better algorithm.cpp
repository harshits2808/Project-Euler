#include "all.h"

ll p[2*ten6+5];
ll sieve[2*ten6+5];
ll ans[2*ten6+5];

int main()
{
	max_factor_sieve(p,2*ten6+5);
	for(ll k=1;k<=2*ten6;k++)
		sieve[k] = k*k - k + 1;
	
	ms(ans);
	ans[1]=1;

	for(int k=1;k<=2*ten6;k++)
	{
		if(sieve[k]==1) continue;

		ll p=sieve[k];
		ll j=k;

		while(j <= 2*ten6)
		{
			while(sieve[j]%p == 0)
				sieve[j] /= p;
			ans[j] = max(ans[j],p);
			j+=p;
		}
	}

	ll res=0;
	
	for(int k=1;k<=2*ten6;k++)
		res += max(ans[k],p[k+1])-1;

	cout<<res;
}
