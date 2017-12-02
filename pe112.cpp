#include<iostream>
#include<iomanip>

using namespace std;

bool check(long long int num)
{
	int r1 = num%10,r;
	num = num/10;
	while(num>0)
	{
		r = num%10;
		if(r>r1 || r<r1)
			break;
		num = num/10;
		r1 = r;
	}
	num = num/10;
	if(r>r1)
	{
		r1 = r;
		while(num>0)
		{
			r = num%10;
			if(r<r1)
				return 1;
			r1 = r;
			num = num/10;
		}
	}
	else if (r< r1)
	{
		r1 = r;
		while(num>0)
		{
			r = num%10;
			if(r>r1)
				return 1;
			r1 = r;
			num = num/10;
		}
	}
	return 0;	
}

int main()
{
	long double c=0;
	for(long double i=100;i<=1587009;i++)
		{
			if(check(i))
				c++;//out<<i<<endl;
			if(c/i >= 0.99)
				cout<<setprecision(10)<<c<<"/"<<i<<endl;
		}
	cout<<c;
}
