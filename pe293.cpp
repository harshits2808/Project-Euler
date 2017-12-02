#include "all.h"

int prime[9]={2,3,5,7,11,13,17,19,23};

bool check(int n)
{
	for(int i=0;i<9 && n>1;i++)
	{
		if(n%prime[i]==0)
			while(n%prime[i]==0)
				n=n/prime[i];
		else
			return 0;
	}
	
	if(n==1)
		return 1;
	return 0;
}

int prime_diff(int n)
{
	for(int i=n+3;;i+=2)
		if(isprime(i)==1)
			return i-n;
}

int main()
{
	int count=0;
	int A[7000];
	for(int i=2;i<ten9;i+=2)
		if(check(i)==1)
			A[count++]=i;
	int c=0;
	int ans[count];
	for(int i=0;i<count;i++)
	{
		A[c++] = prime_diff(A[i]); 
	}
	sort(A,A+c);
	int sum = A[0];
	for(int i=1;i<c;i++)
		if(A[i]!=A[i-1])
			sum += A[i];
	cout<<sum;
}
