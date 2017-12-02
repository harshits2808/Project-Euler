#include "all.h"

int prime[ten8+1];

int main()
{
	ms(prime);
	for(int i=2;i<=ten8;i++)
	{
		if(!prime[i])
			for(int j=i;j<=ten8;j+=i)
				prime[j]++;
	}
	int ans=1;
	for(int i=2;i<=ten8;i++)
	{
		if(prime[i]<=3 && prime[i]>=1) ans+=prime[i];
		else if(prime[i]==4) ans+=6;
		else if(prime[i]==5) ans+=10;
		else if(prime[i]==6) ans+=20;
		else if(prime[i]==7) ans+=35;
		else if(prime[i]==8) ans+=70;
		else err
	}
	cout<<ans;
}
