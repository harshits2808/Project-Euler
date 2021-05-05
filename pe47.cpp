#include "all.h"

using namespace std;

	int prime[1000000];
	int fact[1000000];
	int c=1;

int nofact(int num)
{
	int n=num;
	int count=0;
	for(int i=0;i<c && prime[i]*prime[i] <= num;i++)
	{
		if(num%prime[i]==0)
		{
			count++;

			while(num%prime[i]==0)
			num/=prime[i];
//			if(n==441)
//				cout<<num<<endl;
			if(isprime(num) && num!=1)
				return count+1;
//			if(n==441)
//				cout<<count<<endl;
		}
	}
	return count;
}

int main()
{
	prime[0]=2;

	for(int i=3;i<1000000;i++)
		if(isprime(i))
			prime[c++]=i;
//	cout<<isprime(1)<<endl;
	cout<<"Calculated primes!"<<endl;

//	cout<<nofact(644)<<nofact(645)<<nofact(646)<<endl;
	
	for(int i=2;i<1000000;i++)
		fact[i]=nofact(i);
	
	cout<<"Calculated factors!"<<endl;
	

	for(int i=2;i<1000000;i++)
		if(fact[i] == 4 && fact[i+1] == 4 && fact[i+2] == 4 && fact[i+3]==4)
			cout<<i<<endl;
	
}
