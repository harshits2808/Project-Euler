#include "all.h"

int main()
{
	int ans=0;
	for(ll i=1;;i++)
	{
		if(is_square(5*i*i + 14*i + 1))
			ans++;
		if(ans==30) break;
	}
	cout<<ans;
}
