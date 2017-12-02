#include "all.h"

int prime[100000];

int rad(int n)
{
	int ans=1;
	for(int i=0;prime[i]*prime[i]<=n;i++)
	{
		if(n%prime[i]==0)
		{
			ans *= prime[i];
			while(n%prime[i]==0)
				n/=prime[i];
		}
	}
	ans*=n;
	return ans;
}

int main()
{
	int c=0;
	for(int i=0;i<100000;i++)
		if(isprime(i))
			prime[c++]=i;
	
	pair<int,int> A[100001];
	
	for(int i=1;i<100001;i++)
	{
		A[i].second = i;
		A[i].first = rad(i);
	}
	sort(A+1,A+100001);
	cout<<A[10000].second;
}
