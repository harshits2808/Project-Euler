#include "all.h"

ull sum[50000000];
ull A[10000];

int main()
{
	A[0]=0;
	A[1]=1;
	for(ull i=2;i<10000;i++)
		A[i] = A[i-1]+i*i;
	int c=0;
	for(ull i = 0;i<10000;i++)
		for(ull j =i+2;j<10000;j++)
		{
			if(A[j]-A[i] > ten8)
				break;;
			sum[c++] = A[j]-A[i];
		}
	sort(sum,sum+c);
	ull ans=0;
	for(ull i =1;i<10;i++)
	for(ull j =0;j<10;j++)
	for(ull k =0;k<10;k++)
	for(ull l =0;l<10;l++)
	{
		ull s = i*10000001 + j*1000010 + k*100100 + l*11000;
		if(ispal(s)==1)
			if(BS(sum,0,c-1,s) != -1)
				ans += s;
		
		s = i*1000001 + j*100010 + k*10100 + l*1000;
		if(ispal(s)==1)
			if(BS(sum,0,c-1,s) != -1)
				ans += s;
		
		if(l==0)
		{
		s = i*100001 + j*10010 + k*1100;
		if(ispal(s)==1)
			if(BS(sum,0,c-1,s) != -1)
				ans += s;

		s = i*10001 + j*1010 + k*100;
		if(ispal(s)==1)
			if(BS(sum,0,c-1,s) != -1)
				ans += s;
		
		if(k==0)
		{
		s = i*1001 + j*110;
		if(ispal(s)==1)
			if(BS(sum,0,c-1,s) != -1)
				ans += s;

		s = i*101 + j*10;
		if(ispal(s)==1)
			if(BS(sum,0,c-1,s) != -1)
				ans+=s;
		if(j==0)
		{
			s = i*11;
			if(ispal(s)==1)
					if(BS(sum,0,c-1,s) != -1)
					ans+=s;
			s = i*1;
			if(ispal(s)==1)
					if(BS(sum,0,c-1,s) != -1)
					ans+=s;
		}
		}
		}
	}
	cout<<ans;
}
