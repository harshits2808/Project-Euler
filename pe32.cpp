#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

bool A[100000000];

int fl(int n)
{
	return floor(log10(n));
}

bool check(int i,int j)
{
	bool ch[10]={1,0,0,0,0,0,0,0,0,0};
	int n=i*j;
	while(i>0)
	{
		int r = i%10;
		if(ch[r]==0)
			ch[r]=1;
		else
			return 0;
		i/=10;
	}
	while(j>0)
	{
		int r = j%10;
		if(ch[r]==0)
			ch[r]=1;
		else
			return 0;
		j/=10;
	}
	while(n>0)
	{
		int r = n%10;
		if(ch[r]==0)
			ch[r]=1;
		else
			return 0;
		n/=10;
	}
	return 1;
}

int main()
{
	memset(A,0,sizeof(A));

	for(int i=1;i<9999;i++)
		for(int j=i;j<9999;j++)
			if( fl(i) + fl(j) + fl(i*j) == 6)
				if(check(i,j)==1)
					A[i*j]=1;
	long long int c=0;
	for(int i=0;i<100000000;i++)
		if(A[i]==1)
			c+=i;
	cout<<c;
				
}
