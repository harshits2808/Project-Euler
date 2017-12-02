#include"all.h"

ll val[5*ten7 +1];

int main()
{
	for(ll i=2;i<=5*ten7;i++)
		val[i] = 2*i*i-1;
	for(ll i=2;i<=5*ten7;i++)
	{
		//cout<<i<<endl;
		if(val[i] == 1) continue;
		ll p = val[i];
		for(ll j=i+p;j<=5*ten7;j+=p)
			while(val[j]%p == 0)
				val[j]/=p;

		ll j= ((p-i)%p+p)%p;

		for(;j<=5*ten7;j+=p)
			while(val[j]%p == 0)
				val[j]/=p;
	}
	int ans=0;
	for(ll i=2;i<=5*ten7;i++)
		if(val[i] == 2*i*i-1)
			ans++;
	cout<<ans;
}
