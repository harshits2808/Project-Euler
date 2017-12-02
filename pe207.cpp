#include"all.h"

vector<int> two;

int main()
{
	for(int i=1;i<=60;i++) two.push_back(power(2,i));
	ll num=1,den=1;
	for(ll x=3;;x++)
	{
	//	if(i%100000000==0) cout<<num<<" "<<den<<endl;
	//	if(is_square(1+4*i)==0) continue;
		
	//	ll x = (my_sqrt(1+4*i)+1)/2;

		if(find(two.begin(),two.end(),x) != two.end()) num++;
		den++;

	//	if(num==3 && den==13) cout<<x<<endl;

		if(den/num > 12300)
		{
			cout<<x<<" "<<num<<" "<<den<<endl;
		}
		if(den/num > 12350) break;
		
	//	cout<<i<<" "<<x<<endl;
	}
//	cout<<num<<" "<<den;
}
