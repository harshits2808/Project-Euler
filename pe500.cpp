#include"all.h"

using namespace std;

bool prime[ten7];
long long int pp[500500][2];

int main()
{
	ms(prime);
	
	for(int i=2;i<ten7;i++)
	{
		if(prime[i]==1) continue;
		for(int j=2*i;j<ten7;j+=i)
			prime[j] = 1;
	}
	pp[0][0]=2;
	pp[0][1]=1;
	int c=1;
	for(int i=3;i<ten7;i+=2)
	{
		if(!prime[i])
		{
			pp[c][0]=i;
			pp[c++][1]=1;
		}
		if(c==500500) break;
	}
	for(int i=500500-1;i>=0;i--)
	{
		long long int p = pp[i][0];
		for(int j=0;j<i;j++)
		{
			int po = pp[j][1];
			int add = po + 1;
			if(power(pp[j][0],add) < p)
			{
				pp[j][1] += add;
				pp[i][1] = 0;
				break;
			}
			if(po == 1) break;
		}	
		if(pp[i][1] == 1)break;
	}
	long long int ans = 1;
	for(int i=0;pp[i][1]!=0;i++)
	{
	//	ans += log2(pp[i][1]+1);	
		long long int temp;
		temp = power(pp[i][0],pp[i][1],500500507);
		ans = (ans*temp)%500500507;
	}
	cout<<ans;
}
