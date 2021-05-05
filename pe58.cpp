#include "all.h"
using namespace std;

typedef long long int ll;

int main()
{
	ll  d = 8;
	ll  n1 = 1;
	ll  n2 = 1;
	ll  n3 = 1;
	ll  c=0;
	for(ll i=0;;i++)
	{
		n1 += i*d + 2;
		n2 += i*d + 4;
		n3 += i*d + 6;
		
		if(isprime(n1))
			c++;
		if(isprime(n2))
			c++;
		if(isprime(n3))
			c++;
		
		cout<<(i+1)*4 + 1<<"/"<<c<<" = "<<((i+1)*4 + 1)/c<<endl;
		if(((i+1)*4 + 1)/c >= 10)
			break;
}
}
