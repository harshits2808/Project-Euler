#include "all.h"

int points(int a,int b,int c,int d)
{
	int ans=0;
	int dA,B;

	dA = a*b;
	B = gcd(a,b)-1 + a + b + 1;
	ans += (dA + 2 - B)/2;

	dA = b*c;
	B = gcd(b,c)-1 + b + c + 1;
	ans += (dA + 2 - B)/2;

	dA = c*d;
	B = gcd(c,d)-1 + c + d + 1;
	ans += (dA + 2 - B)/2;

	dA = d*a;
	B = gcd(d,a)-1 +d + a + 1;
	ans += (dA + 2 - B)/2;
	
	ans += a+b+c+d-3;

	return ans;
}

int main()
{
	int n=100;int c=0;int t=0;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	for(int k=1;k<=n;k++)
	for(int l=1;l<=n;l++)
	{
		int num = points(i,j,k,l);
		int sq = sqrt(num);
		if(sq*sq == num)
			c++;
	}
	cout<<c<<endl;
}
