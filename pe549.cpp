#include"all.h"

ll A[ten8+1];

int powfac(int n,int p)
{
	int ans=0;
	int m=p;
	while(p<=n)
	{
		ans += n/p;
		p = p*m;
	}
	return ans;
}

int main()
{
	ll pp[10][30];
	ms(pp);
	for(int i=1;i<=26;i++)
	{
		for(int j=1;;j++)
		{
			if(powfac(j,2)>=i)
			{
				pp[2][i] = j;
				break;
			}
		}
	}
	for(int i=1;i<=26;i++)
	{
		for(int j=1;;j++)
		{
			if(powfac(j,3)>=i)
			{
				pp[3][i] = j;
				break;
			}
		}
	}
	for(int i=1;i<=26;i++)
	{
		for(int j=1;;j++)
		{
			if(powfac(j,5)>=i)
			{
				pp[5][i] = j;
				break;
			}
		}
	}
	for(int i=1;i<=26;i++)
	{
		for(int j=1;;j++)
		{
			if(powfac(j,7)>=i)
			{
				pp[7][i] = j;
				break;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<30;j++) cout<<pp[i][j]<<" ";
		cout<<endl;
	}
	ms(A);
	for(int i=2;i<=ten8;i++)
	{
		if(A[i]==0)
		{
			A[i]=i;
			for(int j=i*2;j<=ten8;j+=i)
			{
				int num=j;
				ll p=0;
				while(num%i==0)
				{
					p++; num/=i;
				}
			//	if(j==6) cout<<i<<" "<<i<<" "<<p<<" "<<pp[i][p]<<endl;
				if(i<=7)
					A[j]=max(A[j],pp[i][p]);
				else
					A[j]=max(A[j],i*p);
			//	if(j==6) cout<<i<<" "<<A[j]<<endl;
			}
		}
	}
	for(int i=2;i<100;i++) cout<<A[i]<<endl;
	ll ans=0;
	loop2(2,ten8+1) ans+=A[i];
	cout<<ans;
}
