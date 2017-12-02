#include "all.h"

int main()
{
	ll ans=0;
	for(ll x=3;3*x < ten9;x+=2)
	{
		ll num = (3*x+1)*(x-1)/4;
		ll sq = my_sqrt(num);
		if(sq*sq == num) ans+=3*x+1;
		
		num = (3*x-1)*(x+1)/4;
		sq = my_sqrt(num);
		if(sq*sq == num) ans+=3*x-1;
	}
	cout<<ans;
}
