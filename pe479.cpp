#include<iostream>
#include "functions.h"
#include "define.h"

using namespace std;

#define mod ten97

int main()
{
	ull sum=0;
	for(ull i=2;i<=ten6;i++)
	{
		ull n = (i*i - 1)%mod;
		ull ans = n*(power(n,ten6,mod)-1) % mod;
		ans = (ans * power(i,mod-2,mod)) % mod;
		ans = (ans * power(i,mod-2,mod)) % mod;
		
		sum = (sum + ans) % mod;
	}
	
	cout<<sum;
}
