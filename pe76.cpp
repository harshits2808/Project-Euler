#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int A[101];
	memset(A,0,sizeof(A));
	A[0]=1;
	for(int i=1;i<=100;i++)
		for(int j=1;j<101;j++)
			if(j-i>=0)
				A[j]+=A[j-i];

	for(int i=1;i<=100;i++)
		cout<<i<<" : "<<A[i]<<endl;
}



