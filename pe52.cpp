#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

bool A[10];
bool check(int num)
{
	bool t[10];
	memset(t,0,sizeof(t));

	while(num>0)
	{
		int r=num%10;
		if(t[r]==1)
			return 0;
		t[r]=1;
		num/=10;
	}

	for(int i=0;i<10;i++)
		if(A[i]!=t[i])
			return 0;

	return 1;
}

int main()
{
	for(int i=1;;i++)
	{
		for(int j = pow(10,i-1);j<=pow(10,i)/6;j++)
		{
			memset(A,0,sizeof(A));
			int num=j;
			while(num>0)
			{
				int r=num%10;
				if(A[r]==1)
					break;
				A[r]=1;
				num/=10;
			}
			if(num!=0)
				continue;
			if(check(2*j) + check(3*j) + check(4*j) + check(5*j) + check(6*j) == 5)
				cout<<j<<endl;
								
		}
	}
}
