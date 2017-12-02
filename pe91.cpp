#include "all.h"

int n=500+1;

bool right(int i,int j)
{
	int x1=i/n,y1=i%n;
	int x2=j/n,y2=j%n;
	int d1 = pow(x1,2)+pow(y1,2);
	int d2 = pow(x2,2)+pow(y2,2);
	int d3 = pow(x2-x1,2)+pow(y2-y1,2);
	if(d1>d2)
	{
		if(d1>d3)
		{
			if(d1==d2+d3) return 1;
			return 0;
		}
		if(d3 == d1+d2) return 1;
		return 0;
	}
	
	if(d2>d3)
	{
		if(d2 == d1+d3) return 1;
		return 0;
	}
	if(d3 == d1+d2) return 1;
	return 0;
}

int main()
{
	int ans=0;
	for(int i=1;i<n*n;i++)
	{
		for(int j=i+1;j<n*n;j++)
		{
			if(right(i,j))
				ans++;
		}
	}
	cout<<ans;
}
