#include "all.h"

int main()
{
	ll A[82][82],upd[82][82],n,lt=80;
	char ch;
	
	loop(lt+2)
	{
		A[i][0] = 1000000000000000000;
		A[0][i] = 1000000000000000000;
		A[i][81] = 1000000000000000000;
		A[81][i] = 1000000000000000000;
		upd[i][0] = 1000000000000000000;
		upd[0][i] = 1000000000000000000;
		upd[i][81] = 1000000000000000000;
		upd[81][i] = 1000000000000000000;
	}

	ifstream fin("p083_matrix.txt");

	for(int i=1;i<=lt;i++)
	{
		for(int j=1;j<=lt;j++)
		{
			fin>>n;
			A[i][j] = n;
			upd[i][j] = 1000000000000000000;
			if(j!=lt)
				fin>>ch;
		}
	}

	upd[1][1] = A[1][1];
	upd[lt][lt] = A[lt][lt];

	for(int c=0;c<lt;c++)
	{
		for(int i=3;i<=lt;i++)
		{
			for(int j=1;j<i;j++)
			{
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j+1][i-j]);
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j-1][i-j]);
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j][i-j+1]);
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j][i-j-1]);
			}
		}
		
		for(int i=159;i>=82;i--)
		{
			for(int j=80;j>=i-80;j--)
			{
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j+1][i-j]);
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j-1][i-j]);
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j][i-j+1]);
				upd[j][i-j] = min(upd[j][i-j],A[j][i-j]+upd[j][i-j-1]);	
			}
		}
	}

	ll ans=1000000000000000000;

	for(int i=1;i<=80;i++)
	{
		A[i][81-i] += min(upd[i-1][81-i],upd[i][81-i-1]);
		A[i][81-i] += min(upd[i+1][81-i],upd[i][81-i+1]);
		ans = min(ans,A[i][81-i]);
	}
	
	cout<<ans;	
}
