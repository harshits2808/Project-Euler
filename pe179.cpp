#include "all.h"

using namespace std;

int A[ten7+1];

int main()
{
	ms(A,ten7+1);
	for(int i=1;i<=ten7;i++)
	{
		for(int j=i;j<=ten7;j+=i)
			A[j]++;
	}
	int count =0;
	for(int i=2;i<=ten7;i++)
		if(A[i]==A[i-1])
			count++;
	cout<<count;
}
