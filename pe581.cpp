#include<iostream>
#include "define.h"
using namespace std;

int prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

bool issmooth(ll n)
{
	for(int i=0;i<15 && n > 1;i++)
		while(n % prime[i] == 0 )
			n = n/prime[i];
	if(n==1)
		return 1;
	return 0;
}

int main()
{
	ull sum=0;
ull c=0;
	for(ll i = 1;i <10000000000000;i++)
	{
		if(i%ten8 == 0)
			cout<<i<<" "<<c<<" "<<sum<<endl;
		if(issmooth(i+1) == 0)
			i++;
		else if(issmooth(i) == 0)
			continue;
		else
		{
			sum += i;
			c++;
		}
			
	}
	cout<<sum;
}
