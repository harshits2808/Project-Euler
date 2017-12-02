#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	long long int A[82][82],n;
	char ch;

	for(int i=0;i<82;i++)
	{
		A[i][0] = 1000000000000000000;
		A[0][i] = 1000000000000000000;
		A[i][81] = 1000000000000000000;
		A[81][i] = 1000000000000000000;
	}

	ifstream fin("p081_matrix.txt");

	for(int i=1;i<=80;i++)
	{
		for(int j=1;j<=80;j++)
		{
			fin>>n;
			A[i][j] = n;
			if(j<80)
			fin>>ch;

		}
	}
	for(int i=1;i<=80;i++)
	{
		for(int j=1;j<=80;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
}

	cout<<A[80][80]<<endl;

	for(int i=1;i<=80;i++)
	{
		for(int j=1;j<=80;j++)
		{
			if(i==1 && j==1) continue;
		//	A[j][i-j] += min(A[j-1][i-j],A[j][i-j-1]);
			A[i][j] += min(A[i-1][j],A[i][j-1]);
//			cout<<"Adding minumum of ("<<j-1<<","<<i-j<<") and ("<<j<<","<<i-j-1<<") to ("<<j<<","<<i-j<<")\n";
		}
	}
/*	long long int m= 1000000000000000000;
	for(int i=1;i<=80;i++)
	{
		if(A[i][80-i+1] < m)
			m=A[i][80-i+1];
	}
	cout<<m;
	*/
cout<<A[80][80];
	fin.close();
}
