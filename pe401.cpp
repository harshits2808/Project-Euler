#include<iostream>
#include "functions.h"
#include "define.h"

// Problem was the use of ull instead of ll , % operator return -ve value also!

using namespace std;

ll mod = 1000000000;
ll high = 1000000000000000;

ll sqsum(ll n)
{
	ll a = n;
	ll b = n+1;
	ll c = 2*n + 1;
	if(a%2==0)
	{
		a = a/2;
		if(a%3 == 0)
			a = a/3;
		else if(b%3 == 0)
			b = b/3;
		else if(c%3 == 0)
			c = c/3;
	}
	else
	{
		b = b/2;
		if(a%3 == 0)
			a = a/3;
		else if(b%3 == 0)
			b = b/3;
		else if(c%3 == 0)
			c = c/3;
	}
	
	ll ans = a%mod;
	b = b%mod;
	c = c%mod;
	ans = (ans*b)%mod;
	ans = (ans*c)%mod;
	
	return ans;
}

int main()
{
	ll sum=0;
//	for(int i=1;i<100;i++)
//		cout<<sqsum(i)-sqsum(i-1)<<endl;
	for(ll i=1 ; i<=high ; i++)
	{
		ll n = (high/i);
		ll r = (high/n);
		ll c = r - i + 1;
		n = n%mod;
		ll a = sqsum(i+c-1) - sqsum(i-1);
		a = a%mod;
		a = (a*n)%mod;
		sum = (sum + a) % mod;
		i += c-1;
	}
	if(sum<0)
		sum+=mod;
	cout<<sum;
}
