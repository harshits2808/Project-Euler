#include "all.h"

int sum_div(int n)
{
	int sum = -n;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			sum = sum + i +n/i;
			if(n/i == i)
				sum = sum-i;
		}
		if(sum > ten6)
			return 0;
	}
	return sum;
}

int A[ten6+1];
int ch[ten6+1];

int main()
{
	memset(ch,0,sizeof(ch));
	A[1]=0;
	for(int i=2;i<ten6+1;i++)
		A[i]=sum_div(i);
	
	for(int i=1;i<ten6+1;i++)
	{
		if(ch[i]>0 || A[i]==0)
			continue;
//		cout<<"here\n";
		int count=1;
		int e=i;
		while(2>1)
		{
//			if(i==220) cout<<"here\n";
			e=A[e];
//			cout<<"here\n";
			if(e==0)
				break;
//			cout<<"here\n";
			if(e==i)
			{
//				cout<<"here\n";
				while(ch[e]==0)
				{
					ch[e]=count;
					e = A[e];
				}
				break;
			}
			count++;
			if(count>1000)
				break;
		}
//		cout<<"here\n";
	}
	cout<<"done\n";
	int m=1;
	for(int i=1;i<ten6+1;i++)
		if(m < ch[i])
			m=ch[i];
	int m2=ten6;
	for(int i=1;i<ten6+1;i++)
		if(ch[i]==m)
			if(m2 > i)
				m2 = i;
	cout<<m2;
}
