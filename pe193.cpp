#include "all.h"

using namespace std;

ll F[ten7];
ll mod = ten97;

ll calF(ll n)
{
	ll sum = n;
	ll i = 2;
	ll c = i*i;
	while(n/c >= ten7)
	{
		sum = (sum - calF(n/c));
		i++;
		c = i*i;
	}
	
	while(c <= n)
	{
		ll k = n/c;
		ll t = n/k;
		t = sqrt(t);
		sum = (sum - (t-i+1)*F[k]);
		i += (t-i+1);
		c = i*i;
	}

	return sum;
	
}

int main()
{
	memset(F,0,sizeof(F));
	for(ll i=2;i*i < ten7; i++)
	{
		for(int j= i*i; j< ten7;j += i*i)
		{
			F[j] = 1;
		}
	}
	
	for(ll i=1;i<ten7;i++)
	{
		if(F[i]==0)
			F[i] = (F[i-1]+1) % mod;
		else
			F[i] = F[i-1];
	}
	ll n = 1125899906842624;
	cout << calF(n);
}

// 774760758
