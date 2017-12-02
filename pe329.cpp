#include"all.h"

bool primes[501];
string str = "PPPPNNPPPNPPNPN";
int seq[15];
ll ansn=0,ansd=1;
void add(ll &a,ll &b,ll c,ll d,ll e,ll f)
{
	a = c*f + d*e;
	b = d*f;
	ll g = gcd(a,b);
	a/=g;
	b/=g;
}
void mul(ll &a,ll &b,ll c,ll d,ll e,ll f)
{
	a = c*e;
	b = d*f;
	ll g = gcd(a,b);
	a/=g;
	b/=g;
}

pair<ll,ll> solve(int n,int val)
{
	ll probn=1,probd=3;
	if(seq[val]==primes[n]) probn++;
	if(val==14)
		return mp(probn,probd);
	pair<ll,ll> A;
	if(n==1) A=solve(n+1,val+1);
	else if(n==500) A=solve(n-1,val+1);
	else
	{
		pair<ll,ll> B,C;
		B = solve(n+1,val+1);
		C = solve(n-1,val+1);
		mul(B.first,B.second,1,2,B.first,B.second);
		mul(C.first,C.second,1,2,C.first,C.second);
		add(A.first,A.second,B.first,B.second,C.first,C.second);
	}
	mul(probn,probd,probn,probd,A.first,A.second);
	return mp(probn,probd);
}
	

int main()
{
	ms(primes);
	loop(501) if(isprime(i)) primes[i]=1;
	loop(15) if(str[i]='P') seq[i]=1; else seq[i] = 0;
	for(int i=1;i<=500;i++)
	{
		pair<ll,ll> A;
		A = solve(i,0);
		add(ansn,ansd,ansn,ansd,A.first,A.second);
		if(ansd > 7824328963567616 || ansn > 60318616769426063) err
	}
//	mul(ansn,ansd,ansn,ansd,1,500);
	cout<<ansn<<"/"<<ansd;
}
