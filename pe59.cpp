#include "all.h"

int A[1500];
int temp[1500];
int c=0;

bool check(char ch[])
{
	int n[128];
	int m=0;
	for(int i=0;i<c;i++)
	{
		temp[i] = A[i]^ch[i%3];
	//	if((temp[i] <=122 && temp[i] >= 97) || (temp[i]>=32 && temp[i]<=41) || (temp[i] >=65 && temp[i] <=90) )
		if(temp[i] < 32 || temp[i] >122)
			return 0;
	}

	return 1;

	memset(n,0,sizeof(n));
	for(int i=0;i<c;i++)
		n[temp[i]]++;
	for(int i=0;i<128;i++)
		m = max(m,n[i]);

	if(n[97]==m || n[101]==m || n[105]==m || n[111]==m || n[117]==m) 
		return 1;
	return 0;
}

void print(char ch[])
{
	cout<<ch[0]<<ch[1]<<ch[2]<<endl<<endl;

	for(int i=0;i<c;i++)
		cout<<char(temp[i]);

	cout<<endl<<endl;
}

int main()
{
	string str;
	cin>>str;
	memset(A,0,sizeof(A));
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==',')
		{
			c++;
			continue;
		}
		
		A[c] = A[c]*10 + str[i]-48;
	}

	c++;

	for(int i=97;i<=122;i++)
	{
		for(int j=97;j<=122;j++)
		{
			for(int k=97;k<=122;k++)
			{
				char ch[3];
				ch[0]=i; ch[1]=j; ch[2]=k;
				if(check(ch))
				{
    				print(ch);
					int sum=0;
					for(int i=0;i<c;i++)
						sum+=temp[i];
					cout<<sum;
				}
			}
		}
	}

	// Key : god


}
