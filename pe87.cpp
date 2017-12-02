#include<iostream>
#include "isprime.h"
#include<cstring>

using namespace std;

bool A[50000000];

int main()
{
	int prime[4000];
	int c=0;
	
	memset(A,0,sizeof(A));

	for(int i=2;i<8000;i++)
		if(isprime(i))
			prime[c++]=i;

//	cout<<c<<endl;

	for(int i=0;i<c;i++)
	{
		long long int num1 = prime[i]*prime[i];
		if(num1 > 50000000)
			break;
		for(int j=0;j<c;j++)
		{
			long long int num2 = prime[i]*prime[i] + prime[j]*prime[j]*prime[j];
			if(num2 > 50000000)
				break;
			for(int k=0;k<c;k++)
			{
				long long int num3 = prime[i]*prime[i] + prime[j]*prime[j]*prime[j] + prime[k]*prime[k]*prime[k]*prime[k];
				if(num3 < 50000000)
					A[num3] = 1;
				else
					break;
			}
		}
	}
	
	int count = 0;
	for(int i=0;i<50000000;i++)
		count += A[i];
	
	cout<<count;
}
