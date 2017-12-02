#include<iostream>

using namespace std;

int main()
{
	unsigned long long int num=0;
	unsigned long long int den =1;
	for(int i=100;i>1;i--)
	{
		unsigned long long int a;
		if(i%3 == 0)
			a=2* (i/3);
		else
			a=1;
		
		num = num + a*den;
		unsigned long long int t =num;
		num = den;
		den= t;
	}
	cout<<num+den*2;
}
