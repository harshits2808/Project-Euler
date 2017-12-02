#include<iostream>

using namespace std;

bool check(long long int num)
{
	long long int n = num*num;
	if(n%10 != 9)
		return 0;
	n/=100;

	if(n%10 != 8)
		return 0;
	n/=100;
	
	if(n%10 != 7)
		return 0;
	n/=100;

	if(n%10 != 6)
		return 0;
	n/=100;

	if(n%10 != 5)
		return 0;
	n/=100;

	if(n%10 != 4)
		return 0;
	n/=100;

	if(n%10 != 3)
		return 0;
	n/=100;

	if(n%10 != 2)
		return 0;
	n/=100;

	if(n%10 != 1)
		return 0;
	n/=100;
	
	return 1;
}

int main()
{
	for(long long int i=100000000;;i++)
		if(check(i)==1)
			cout<<i;
}
