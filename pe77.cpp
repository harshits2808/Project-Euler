#include "all.h"
using namespace std;

int main()
{
	int A[2001];
	int prime[1000];
	prime[1]=2;
	int c=2;
	for(int i=3;i<2000;i++)
		if(isprime(i))
			prime[c++]=i;
	memset(A,0,sizeof(A));
	A[0]=1;
	for(int i=1;i<c;i++)
		for(int j=1;j<2001;j++)
			if(j-prime[i]>=0)
				A[j]+=A[j-prime[i]];

	for(int i=1;i<=200;i++)
		cout<<i<<" : "<<A[i]<<endl;
}



