#include<iostream>
#include "functions.h"
#include "define.h"
#include<cstring>

using namespace std;

bool prime[ten7+1];
int highpow[ten7+1];
int primes[500];

ull M(ull n)
{
	for(int i=n-highpow[n];i>=0;i-=highpow[n])
	{
		if(power(i+1,2,n)==i+1)
			return i+1;
		else if(power(i,2,n)==i)
			return i;
	}
}
/*
ull M2(ull n)
{
	for(int i=n-1;i>=0;i--)
		if(power(i,2,n)==i)
			return i;
}
*/
int main()
{
	memset(prime,0,sizeof(prime));
	prime[2]=1;

	for(int i=3;i<ten7;i+=2)
		if(isprime(i))
			prime[i]=1;

	primes[0]=2;
	int c=1;
	for(int i=3;i<3162;i++)
		if(prime[i]==1)
			primes[c++]=i;
	
	cout<<"Done\n";

	for(long long int i=2;i<ten7;i++)
	{
		if(prime[i]==0)
			continue;
		
		for(long long int j = i*i;j<ten7;j*=i)
		{
			prime[j]=1;
		}
	}
	
	cout<<"Done\n";

	for(int i=6;i<ten7;i++)
	{
		if(prime[i]==1)
			continue;
		
		long long int n = i;
		long long int max = 1;
		for(int j=0;j<c && n>1 && max*max < i;j++)
		{
			long long int temp = 1;
			while(n%primes[j]==0)
			{
				n=n/primes[j];
				temp = temp*primes[j];
//				if(i==6)
//					cout<<max<<" "<<temp<<" "<<primes[j]<<endl;
			}
			
			if(temp > max)
				max = temp;
			
//			if(i==6)
//				cout<<max<<" "<<temp<<" "<<primes[j]<<endl;
		}
		highpow[i]=max;
	}

	cout<<"Done\n";

	ull sum=0;
//	ull sum2=0;

	for(int i=2;i<=10000000;i++)
	{
		if(prime[i]==1)
		{
//			cout<<i<<" : "<<1<<endl;
			sum++;
//			sum2++;
			continue;
		}
		
//		cout<<i<<" : "<<M(i)<<" : "<<M2(i)<<endl;
		sum += M(i);
//		sum2 += M2(i);
		if(i%100000 == 0)
			cout<<i<<endl;
	}
	
	cout<<sum;
}
