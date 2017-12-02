#include"all.h"

int prime[ten7+1][2];

int main()
{
	ms(prime);
	for(int i=2;i<=ten7;i++)
	{
		if(!prime[i][0]) prime[i][0]=i;
		if(prime[i][1]<2)
		for(int j=i*2;j<=ten7;j+=i)
		{	
			prime[j][0]=i;
			prime[j][1]++;
		}
	}
		
	ll ans=0;
	for(ll i=2;i<=ten7;i++)
	{
	//	if(i%100000==0) cout<<i<<endl;
		if(prime[i][0]==i) ans++;
		else
		{
			for(ll j=i-prime[i][0];j>=0;j-=prime[i][0])
			{
				if(j*(j+1)%i==0)
				{
					ans+=j+1;
					break;
				}
				if(j*(j-1)%i==0)
				{
					ans+=j;
					break;
				}
			}
		}
	}	
	cout<<ans;
}
