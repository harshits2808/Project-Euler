#include "all.h"

int main()
{
/*	int p[100][100];
	p[0][0]=1;
	for(int i=1;i<100;i++)
	{
		for(int j=1;j<100;j++)
		{
			if(i==1)
				A[j][i] = 1;
			
			else
			{
				A[j][i]=0;
				if(j-i > 0)
					A[j][i] += A[j-i][i];
				if(j-1 > 0 && i-1 > 0)
					A[j][i] += A[j-1][i-1];
			}
		}
	}*/
	int count=0;
	for(int i=0;i<=10;i++)
	for(int j=0;j<=10;j++)
	for(int k=0;k<=10;k++)
	for(int l=0;l<=10;l++)
	for(int m=0;m<=10;m++)
	for(int n=0;n<=10;n++)
	for(int o=0;o<=10;o++)
		if(i+j+k+l+m+n+o == 20)
			count++;
	cout<<count;
}
