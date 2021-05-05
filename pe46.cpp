#include "all.h"
using namespace std;

	int prime[1000000];
	int compo[1000000];

int check(int n)
{
	if(n%2==1)
		return 0;

	n=n/2;
	int sq = sqrt(n);
	if(sq*sq == n)
		return 1;
	return 0;
}

int main()
{

	int pc=1,cc=0;	

	prime[0]=2;
	for(int i=3;i<1000000;i+=2)
	{
		if(isprime(i))
			prime[pc++]=i;
		else
			compo[cc++]=i;
	}
	
	for(int i=0;i<cc;i++)
	{
		bool ch=1;
		for(int j=0;j<pc && compo[i] - prime[j] > 0;j++)
			if(check(compo[i]-prime[j])==1)
				{ch=0; break;}
	
		if(ch)
			cout<<compo[i]<<endl;
	}
}
