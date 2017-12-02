#include<iostream>
#include "functions.h"

using namespace std;

int main()
{
	long double n=1;
	long double low = n/3;
	long double high = n/2;
	//cout<<low<<endl<<high<<endl;
	int c=0;
	for(long double i=2;i<=12000;i++)
	{
		for(long double j = (int)(i*low - 1); j<(int)(i*high + 1);j++)
		{
			if(gcd(i,j)>1)
				continue;
			if(j/i > low && j/i < high)
				c++;
		}
	}
	cout<<c;
}
