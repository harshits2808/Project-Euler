#include "all.h"

ll prime[ten6];

int main()
{
	prime[1]=2;
	ull c=2;
	for(ll i=3;c<100000;i++)
		if(isprime(i)==1)
			prime[c++]=i;
	
	for(ll i=1;;i+=2)
	{
		ll r = 2*i*prime[i];
		if(r > 10000000000)
		{
			cout<<i;
			break;
		}
	}
}
