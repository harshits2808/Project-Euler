#include "all.h"
using namespace std;

unsigned long long int power(unsigned long long int n,unsigned long long int p)
{
	unsigned long long int ans=1;
	for(unsigned long long int i=0;i<p;i++)
		ans = ans*n;
	return ans;
}

int main()
{
	unsigned long long int lcm[32];
	lcm[1]=1;
	for(unsigned long long int i=2;i<32;i++)
	{
		if(isprime(i))
			lcm[i]=lcm[i-1]*i;
		else if(i == 4 || i==8 || i==16)
			lcm[i]=lcm[i-1]*2;
		else if(i==9 || i==27)
			lcm[i]=lcm[i-1]*3;
		else if(i==25)
			lcm[i]=lcm[i-1]*5;
		else
			lcm[i]=lcm[i-1];
	}
	for(int i=1;i<32;i++)
		cout<<lcm[i]<<endl;
	unsigned long long int ans=0;
	for(unsigned long long int i=1;i<32;i++)
	{
		unsigned long long int l = lcm[i];	
		
		while((l+1)<power(4,i))
		{
			if((l+i+1)%(i+1) != 0)
				ans++;
			l+=lcm[i];
		}
		cout<<ans<<endl;
	}
	cout<<ans;
}

