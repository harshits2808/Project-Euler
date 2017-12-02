#include "all.h"

int p[2*ten8+1];
vector<int> prime;
//bool pcheck[ten8+1];

int main()
{
	//ms(pcheck);
	max_factor_sieve(p,2*ten8+1);
	prime.push_back(3);
	for(int i=7;i<2*ten6+50;i+=2)
		if(p[i]==i && (i%12 == 7 || i%12 == 1))
		{
			prime.push_back(i);
		//	pcheck.push_back(0);
		}
	
	ll ans=0;

/*	for(int i=1;i<100;i++)
	{
		int num = i*i-i+1;
		cout<<i<<" : "<<num<<" : ";
		for(int j=2;j<=num;j++)
		{
			if(num%j==0)
				if(isprime(j))
					cout<<j<<" ";
		}
		cout<<endl;
}return 0;*/
//	ll ans2=0;
//	loop(100) cout<<p[i]<<endl;

	for(ll i=1;i<=100000;i++)
	{
	//	cout<<i<<endl;
		if(i%10000==0) cout<<i<<endl;
		ll num=i*i -i + 1;
//		ans2 += p[num]-1;
		ll maxp=p[i+1];
		for(int j=0;prime[j]*prime[j] <= num && j<prime.size();j++)
		{
		
			if(num < 2*ten8+1)
				break;
			while(num%prime[j]==0)
			{
			//	pcheck[prime[j]]=1;
				if(prime[j]>maxp) maxp=prime[j];
				num/=prime[j];
			}
		/*	if(prime[j]<i && pcheck[prime[j]]==0)
			{
			//	cout<<j<<" "<<prime[j]<<endl;
				prime.erase(prime.begin()+j);
			//	pcheck.erase((pcheck.begin()+j));
				j--;
				
			}*/
		}
		if(num <2*ten8+1) {if(maxp<p[num]) maxp = p[num];}
		else if(num>maxp) maxp=num;
		//if(num<ten8) pcheck[num]=1;
		ans += maxp-1;
	}
	cout<<ans;
}
