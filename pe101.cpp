#include "all.h"

long long int mainpoly(long long int x)
{
//	return pow(x,3);
	long long int ans = 0;
	for(long long int i=0;i<=10;i++)
		ans += (i%2==0)?pow(x,i):-pow(x,i);
	return ans;
}

long long int nBOP(int n)
{
	vector <long long int> A;
	for(long long int i=1;i<=n;i++)
		A.push_back(mainpoly(i));
	long long int ans = A[n-1];
	while(--n)
	{
		for(int i=0;i<n;i++)
		{
			A[i] = A[i+1]-A[i];
		}
		ans += A[n-1];
	}
	return ans;
}

int main()
{
	long long int ans=0;
	for(int i=1;i<11;i++) ans+=nBOP(i);
	cout<<ans;
}
