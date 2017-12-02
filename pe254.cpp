#include "all.h"

using namespace std;

int main()
{
	int g[200];
	loop(200) g[i]=ten99;
	int f[10];
	f[0]=1;
	loop2(1,10) f[i]=i*f[i-1];
	for(int i=1;i<10000000;i++)
	{
		int ans=0;
		int n = i;
		while(n>0)
		{
			ans += f[n%10];
			n/=10;
		}
		ans = sumdig(ans);
		g[ans] = min(g[ans],i);
	}
	int ans=0;
	loop2(1,151) cout<<i<<" : "<<g[i]<<endl;
	loop2(1,151) ans += sumdig(g[i]);
	cout<<ans;
}
