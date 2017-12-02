#include "all.h"

ull sq[100000];
ull cb[1000];
ull ans[ten8];
ull A[ten8];

int main()
{
	for(ull i = 1;i<1000;i++)
		cb[i] = i*i*i;
	for(ull i = 1;i<100000;i++)
		sq[i] = i*i;
	
	int c = 0;


	for(int i = 1;i<1000;i++)
		for(int j = 1;j<100000;j++)
			A[c++] = cb[i] + sq[j];


	int c1=0;
	cout<<"Done\n";
	for(int i = 0;i<c;i++)
		if(ispal(A[i])==1)
			ans[c1++] = A[i];
	cout<<"Done\n";
	
	sort(ans,ans+c1);

	for(int i=0;i<c1;i++)
		cout<<ans[i]<<endl;
	
	cout<<"Printed\n";

	int tc = 1;
	for(int i=1;i<c1;i++)
	{
		if(ans[i] == ans[i-1])
		{
			tc++;
			continue;
		}
		
		if(tc==4)
			cout<<ans[i-1]<<endl;
		
		tc=1;
	}	
}
