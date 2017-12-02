#include<iostream>
#include<cstring>

using namespace std;

unsigned long long int A[100001];

int main()
{
	memset(A,0,sizeof(A));
	A[0]=1;
	for(int i=1;i<100001;i++)
		for(int j=1;j<100001;j++)
			if(j-i>=0)
				A[j]=(A[j]+A[j-i])%1000000;

	for(int i=1;i<100001;i++)
		if(A[i] == 0)
			cout<<i<<endl;
}



