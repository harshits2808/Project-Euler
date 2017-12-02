#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int A[201];
	memset(A,0,sizeof(A));
	int coin[8]={1,2,5,10,20,50,100,200};
/*	A[1]=1;
	for(int i=2;i<=200;i++)
	{
		int c = 0;
	//	if(i==2 || i==5 || i== 10 || i== 20 || i==50 || i==100 || i==200)
	//		c++;
		if(i-2 > 0 )//&& i-2 > 0)
			c += A[i-2];
		if(i-5 > 0 )//&& i-5 > 0)
			c += A[i-5];
		if(i-10 > 0 )//&& i-10 > 0)
			c += A[i-10];
		if(i-20 > 0 )//&& i-20 > 0)
			c += A[i-20];
		if(i-50 > 0 )//&& i-50 > 0)
			c += A[i-50];
		if(i-100 > 0 )//&& i-100 > 0)
			c += A[i-100];
		A[i]=A[i-1]+c;
	}*/
	A[0]=1;
	for(int i=0;i<8;i++)
		for(int j=1;j<201;j++)
			if(j-coin[i]>=0)
				A[j]+=A[j-coin[i]];

	for(int i=1;i<=200;i++)
		cout<<i<<" : "<<A[i]<<endl;
}

// Prefer counting :P

