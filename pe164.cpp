#include<iostream>

using namespace std;

int main()
{
	unsigned long long int A[100];
	unsigned long long int s[100];
	unsigned long long int t[100];
	for(int i=0;i<100;i++)
		A[i]=t[i]=0;
	
	for(int a = 1;a < 10;a++)
	{
		for(int b = 0;b < 10; b++)
		{
			for(int c=0;c<10;c++)
			{
				if(a+b+c <= 9)
					A[b*10 + c]++;
				s[b*10 + c] = b+c;
			}
		}
	}
	
	for(int i=0;i<100;i++)
		cout<<i<<" : "<<A[i]<<endl;

	for(int i=4;i<=20;i++)
	{
		for(int j=0;j<10;j++)
		{
			for(int k=0;k<100;k++)
			{
				if(s[k] + j <= 9)
				{
					int l = k%10;
					t[l*10 + j] += A[k];
				}
			}
		}
		
		for(int j=0;j<100;j++)
		{
			A[j] = t[j];
			t[j]=0;
		}
	}
	
	unsigned long long int sum=0;
	for(int i=0;i<100;i++)
	{
		sum+=A[i];
		cout<<i<<" : "<<A[i]<<endl;
	}
	cout<<sum;
}
