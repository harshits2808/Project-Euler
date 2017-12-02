#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

bool check(int n)
{
	bool ch[10]={1,0,0,0,0,0,0,0,0,0};
	int c=0;
	for(int i=1;c<9;i++)
	{
		long long int num = n*i;
		while(num>0)
		{
			int r = num%10;
			if(ch[r]==0)
				ch[r]=1;
			else
				return 0;
			num/=10;
			c++;
		}
	}
	cout<<n<<endl
	;return 1;
}

int main()
{
	for(int i=1;i<9999;i++)
		check(i);
}
