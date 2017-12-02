#include<iostream>
#include<cmath>

using namespace std;


int fl(int n)
{
	return floor(log10(n));
}

int main()
{
	int s=0;
	int a[6];
	for(int p=1;p<=6;p++)
	{
		int d = pow(10,p);
		s=0;
	for(int i=1;i<200000;i++)
	{
		if(s + fl(i)+1 < d)
		{
			s+=fl(i)+1;
			continue;
		}
		int n = i;
		int c=0;
		while(n>0)
		{
			int r=n%10;
			a[c++]=r;
			n/=10;
		}
		
		cout<<a[c-(d-s)]<<endl;
		break;
	}
	}
}
