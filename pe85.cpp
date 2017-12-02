#include<iostream>
#include<cmath>
using namespace std;
	long long int A[1500][1500];
int main()
{

	for(long long int n=1;n<1500;n++)
		for(long long int m=1;m<1500;m++)
			A[n][m]=n*m*(n+1)*(m+1)/4;

	long long int minimum = 10000000;
	long long int ar;
	for(long long int n=1;n<1500;n++)
		for(long long int m=1;m<1500;m++)
			{
				if(minimum > abs(2000000 - A[m][n]))
				{
					minimum = abs(2000000 - A[m][n]);
					ar = m*n;
				//	cout<<m<<" "<<n<<" "<<A[m][n]<<endl;
				}
			}
	cout<<ar;
}
