#include<iostream>
#include "isprime.h"
#include<cstring>

using namespace std;

int prime[10000][11];
int poss[10000][11];
int cp=0;
int c=0;

bool check(int in1, int in2)
{
	for(int i=0;i<10;i++)
		if(poss[in1][i] != poss[in2][i])
			return 0;
	return 1;
}

void countdig(int in)
{
	int n = prime[in][10];
	while(n>0)
	{
		int r = n%10;
		prime[in][r]++;
		n/=10;
	}
	for(int i=0;i<11;i++)
		poss[cp][i]=prime[in][i];
	cp++;
}

int main()
{
	memset(prime,0,sizeof(prime));
	for(int i=1000;i<10000;i++)
	{
		if(isprime(i))
		{
			prime[c++][10]=i;
			countdig(c-1);
		}
	}
	for(int i=0;i<cp;i++)
		for(int j = i+1; j<cp;j++)
			if(check(i,j)==1)
				for(int k=j+1;k<cp;k++)
					if(check(j,k)==1)
						if(poss[j][10]-poss[i][10] == poss[k][10]-poss[j][10])
							cout<<poss[i][10]<<poss[j][10]<<poss[k][10]<<endl;
}
