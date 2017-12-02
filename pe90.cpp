#include "all.h"

bool arrg[210][10];
int sq[9][2]={{0,1},{0,4},{0,9},{1,6},{2,5},{3,6},{4,9},{6,4},{8,1}};

bool check(int i,int j)
{
	for(int c=0;c<9;c++)
	{
		if((arrg[i][sq[c][0]]==1 && arrg[j][sq[c][1]] == 1) || (arrg[j][sq[c][0]]==1 && arrg[i][sq[c][1]] == 1))
			continue;
		return 0;
	}
	return 1;
}

int main()
{
	ms(arrg);
	int c=0;
	for(int q=0;q<10;q++)
	for(int w=q+1;w<10;w++)
	for(int e=w+1;e<10;e++)
	for(int r=e+1;r<10;r++)
	for(int t=r+1;t<10;t++)
	for(int y=t+1;y<10;y++)
	{
		arrg[c][q]=1;
		arrg[c][w]=1;
		arrg[c][e]=1;
		arrg[c][r]=1;
		arrg[c][t]=1;
		arrg[c][y]=1;
		if(arrg[c][6]==1) arrg[c][9]=1;
		else if(arrg[c][9]==1) arrg[c][6]=1;
		c++;
	}
	int ans=0;
	for(int i=0;i<c;i++)
		for(int j=i+1;j<c;j++)
			if(check(i,j)==1)
				ans++;
	cout<<ans;
}
