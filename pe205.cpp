#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	long long int A[37];
	long long int B[37];
	long long int sum=0;
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	for(int i0=1;i0<=4;i0++)
	for(int i1=1;i1<=4;i1++)
	for(int i2=1;i2<=4;i2++)
	for(int i3=1;i3<=4;i3++)
	for(int i4=1;i4<=4;i4++)
	for(int i5=1;i5<=4;i5++)
	for(int i6=1;i6<=4;i6++)
	for(int i7=1;i7<=4;i7++)
	for(int i8=1;i8<=4;i8++)
		A[i0+i1+i2+i3+i4+i5+i6+i7+i8]++;
	
	for(int i=0;i<37;i++)
		sum+=A[i];
	
	cout<<sum<<endl;

	for(int i0=1;i0<=6;i0++)
	for(int i1=1;i1<=6;i1++)
	for(int i2=1;i2<=6;i2++)
	for(int i3=1;i3<=6;i3++)
	for(int i4=1;i4<=6;i4++)
	for(int i5=1;i5<=6;i5++)
		B[i0+i1+i2+i3+i4+i5]++;
		
	sum=0;
	
	for(int i=0;i<37;i++)
		sum+=B[i];

	cout<<sum<<endl;

	sum=0;

	for(int i=0;i<37;i++)
		for(int j=0;j<i;j++)
			sum += B[j]*A[i];

	cout<<sum;
		
}
