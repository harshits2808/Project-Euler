#include "all.h"
using namespace std;

long long int p[80000][2];

int main()
{
	int max=1,maxp,maxn;

	p[0][0]=p[0][1]=2;
	int c=1;
	for(int i=3;i<1000000;i+=2)
		if(isprime(i))
		{
			p[c][0] = i;
			p[c][1] = p[c-1][1]+i;
			c++;
		}

	for(int n=0;p[n][0] < 1000000/max;n++)
	{
		for(int i=n+1;i<c;i++)
		{
			if(p[i][1] > 1000000)
				break;
			if(isprime(p[i][1] - p[n][1]))
			{
				if(max<(i-n))
				{
					max=i-n;
					maxp=p[i][1]-p[n][1];
				}
			}
			
		}
	}
	cout<<maxp<<" "<<max;
	
}
