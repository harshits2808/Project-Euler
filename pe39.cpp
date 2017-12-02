#include<iostream>

using namespace std;

int main()
{
	int m = 0;
	int mp;
	for(int p=10;p<=1000;p++)
	{
		int count=0;

		for(int a=1;a<=p/2+1;a++)
		{
			for(int b = max(p/2 - a - 1,a+1); b <= p/2 + 1; b++)
			{
				int c = p - a - b;
				if(a*a + b*b == c*c && c>0)
					count++;
			}
		}

		if(m<=count)
		{
			m=count;
			mp = p;
		}
	}	
	cout<<mp;
}
