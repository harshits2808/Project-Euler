#include "all.h"

vector <ll> prime;

ll temp = 0 ,n = 10000000;

void high(ll p,ll q,ll num)
{
//	if(p==2 && q==7) cout<<temp<<endl;
	temp = max(num,temp);
	if(num*p > n) return;
	else high(p,q,num*p);
	if(num*q > n) return;
	else high(p,q,num*q);
}

int main()
{
	ll ans=0;
	loop(n) if(isprime(i)) prime.push_back(i);
	for(int i=0;i<prime.size();i++)
	{
		if(prime[i]*prime[i+1] > n)
			break;
		for(int j=i+1;j<prime.size();j++)
		{
			if(prime[i]*prime[j] > n)
				break;
			high(prime[i],prime[j],prime[i]*prime[j]);
			ans += temp;
			temp=0;
		}
	}
	cout<<ans;
}
