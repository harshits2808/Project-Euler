#include "all.h"

int primes[100000000];

int main()
{
	ms(primes);
	for(int i=4;i<ten8;i+=2) primes[i]=1;
	for(int i=3;i<ten8;i+=2)
		if(!primes[i])
			for(int j=2*i;j<ten8;j+=i)
				primes[j]=1;
	primes[0]=primes[1]=0;
	for(int i=2;i<ten8;i++)
	{
		if(primes[i]==1) primes[i]=primes[i-1];
		else primes[i]=primes[i-1]+1;
	}
	int ans=0;
	for(int i=2;i*i<ten8;i++)
		if(primes[i] != primes[i-1])
			ans += primes[ten8/i]-primes[i-1];
	cout<<ans;
}
