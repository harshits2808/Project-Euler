#include "all.h"

// Finding sum of digits is easier than this, sum = 9*(p-1)/2

int main()
{
	for(ll i=729927009;i>724637680;i-=2)
		if((i*56789)%100000==99999 || (i*56789)%100000==-1)
			if(isprime(i)==1)
			{
				ll sum = 0;
				ll t=0;
				ll b =10;
				ll r = 1;
				ll p = i;
				do
				{
					t++;
					ll x = r*b;
					ll d = x/p;
					r = x % p;
					sum += d;
				}while(r!=1);
				if(t==p-1)
					cout<<i<<" : "<<sum<<endl;
				
			}
}
