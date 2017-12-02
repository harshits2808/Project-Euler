#include "all.h"

ll mod = 123454321;
ll t = ten6;
ll x = 260517;
ll y = 4232097;
ll n=6666666666665;

int main()
{
	ll modI = mod_inverse(t-1,mod);
//	cout<<t<<" "<<mod<<" "<<modI<<endl;
	ll term = power(t,n+1,mod);
	term = (term-t+mod)%mod;

	ll temp = (t-1)*x + y;
	temp = temp%mod;

	term = (term*temp)%mod;

	term = (term*modI)%mod;
	term = (term*modI)%mod;
	
	ll ans = (term+x) % mod;
	
	term = (y*(n%mod))%mod;
	term = (term*modI)%mod;

	ans = (ans-term+mod)%mod;

//	cout<<ans<<endl;

	ll x10 = 3997;
	ll y10 = 2975577;

	term = power(t,n+1,mod);

	temp = (t-1)*x10 + y10;
	temp = temp%mod;
	
	term = (term*temp)%mod;

	term = (term*modI)%mod;
	
	ans = (ans+term)%mod;

	term = (y10*modI)%mod;
	
	ans = (ans-term+mod)%mod;
	
	cout<<ans;
}
