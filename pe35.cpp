#include<iostream>
#include<cmath>

using namespace std;

bool check_dec(long long int n)
{
	long long int n1=n;
	int ar[30];
	int i=0;
	while(n)
	{
		ar[i++]=n%10;
		n/=10;
	}
	i--;
	for(int j=0;j<=i/2;j++)
		if(ar[j]!=ar[i-j])
			return 0;
	cout<<n1<<endl;
	return 1;	
}

bool check_bi(long long int n)
{
	long long int n1=n;
	int ar[30];
	int i=0;
	while(n1)
	{
		ar[i]=n1%2;
		i++;	n1/=2;
	}
	i--;
	for(int j=0;j<=i/2;j++)
		if(ar[j]!=ar[i-j])
			return 0;
	return check_dec(n);
}

int main()
{
	long long int sum=0;
	for(long long int i=1;i<=1000000;i++) 
	{	if(check_bi(i))
			sum+=i;
	}
	cout<<sum;
}
