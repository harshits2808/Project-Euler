#include "all.h"

// Fast mehtod - for each prime, find (log(ten9) base(i)+1) and multiply for each i !

int prime[50];
int c=0;

bool isham(int n)
{
	for(int i=0;i<c && n>1;i++)
		while(n%prime[i]==0)
			n=n/prime[i];
	if(n==1)
		return 1;
	return 0;
}

int main()
{
	for(int i=2;i<100;i++)
		if(isprime(i))
			prime[c++]=i;

	int count=0;
	for(int i=1;i<=ten9;i++)
		if(isham(i)==1)
			count++;
	
	cout<<count;
}
