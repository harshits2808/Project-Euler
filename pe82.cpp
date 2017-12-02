#include "all.h"

int main()
{
	ll A[82][82],upd[82][82],n;
	char ch;
	
	loop(82)
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

	ifstream fin("p082_matrix.txt");

	for(int i=1;i<=80;i++)
	{
		for(int j=1;j<=80;j++)
		{
			fin>>n;
			A[i][j] = n;
			upd[i][j] = n;
			if(j!=80)
				fin>>ch;
		}
	}

	for(int i=1;i<80;i++)
	{
		for(int j=1;j<=80;j++)
		{
			upd[j][i] = min(upd[j][i],A[j][i]+upd[j-1][i]);
			upd[j][i] = min(upd[j][i],A[j][i]+upd[j+1][i]);
		}
		for(int j=80;j>=1;j--)
		{
			upd[j][i] = min(upd[j][i],A[j][i]+upd[j-1][i]);
			upd[j][i] = min(upd[j][i],A[j][i]+upd[j+1][i]);
		}
		for(int j=1;j<=80;j++)
		{
			upd[j][i+1] += upd[j][i];
		}
	}
	
	ll ans = 1000000000000000000;
	
	loop2(1,81) ans=min(ans,upd[i][80]);

	cout<<ans;
}
