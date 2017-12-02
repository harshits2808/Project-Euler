#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

#define ten12 1000000000000
#define ten6 1000000

long long int A[10000000];

int main()
{
	int c=0;
	for(long long int i=2;i<ten6;i++)
	{
		long long int a = 1 + i;
		for(int j=2;;j++)
		{
			a += pow(i,j);
			if(a < ten12)
				A[c++] = a;
			else
				break;
		}
	}
//	cout<<c;
	sort(A,A+c);
//	for(int i=0;i<c;i++)
//		cout<<A[i]<<endl;
	unsigned long long int sum = A[0];
	for(int i=1;i<c;i++)
		if(A[i] != A[i-1])
			sum += A[i];
	cout<<sum+1;
}
