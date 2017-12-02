#include "all.h"

int main()
{
	int A[15][15];
	for(int i=0;i<15;i++)
		for(int j=0;j<15;j++)
		{
			cin>>A[i][j];
			A[i][j]*=-1;
		}
	
	for(int i=0;i<15;i++)
	{
		int mi=ten9;
		for(int j=0;j<15;j++)
			mi=min(mi,A[i][j]);
		for(int j=0;j<15;j++)
			A[i][j]-=mi;
	}
	
	for(int j=0;j<15;j++)
	{
		int mi=ten9;
		for(int i=0;i<15;i++)
			mi=min(mi,A[i][j]);
		for(int i=0;i<15;i++)
			A[i][j]-=mi;
	}
	cout<<endl;
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<15;j++)
		{
			cout<<A[i][j]<<"  ";
			if(A[i][j]==0) 
				cout<<"  ";
			else
				for(int s=3;s>nodig(A[i][j]);s--)
					cout<<" ";
		}
		cout<<endl<<endl;
	}
}
