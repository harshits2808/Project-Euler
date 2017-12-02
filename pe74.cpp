#include<iostream>
#include "define.h"
#include "functions.h"

using namespace std;

ull fac[10];

int check(ull num,int c)
{
	if(num == 169 || num == 363601 || num == 1454)
		return c+3;
	
	if(num == 871 || num == 872 || num == 45361 || num == 45362)
		return c+2;
	
	ull n=0;
	ull t = num;
	while(num>0)
	{
		int r=num%10;
		n += fac[r];
		num = num/10;
	}
	
	if(t == n)
		return c+1;

	return (check(n,c+1));
}

int main()
{
	fac[0]=1;

	for(int i=1;i<10;i++)
		fac[i] = fac[i-1]*i;
	
	int c=0;

	for(int i=0;i<1000000;i++)
		if(check(i,0)==60)
			c++;

	cout<<c;
}
