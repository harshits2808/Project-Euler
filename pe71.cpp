#include<iostream>

using namespace std;

int main()
{
	long double low = (long double)2/5;
	int lown,lowd;
	long double high = (long double)3/7;
	for(long double i = 8;i<=1000000;i++)
	{
		for(long double j = (int)(i*low-1);j<(int)(i*high+1);j++)
		{
			long double n = j/i;
		//	cout<<j<<"/"<<i<<" = "<<n<<endl;
		//	cout<<high<<" "<<low<<endl;
			if(n > low && n < high)
			{
				low = n;
				lown = j;
				lowd = i;
			//	cout<<lown<<"/"<<lowd<<" = "<<n<<endl;
			}
			else if(j/i > high)
				break;
		}
	}
	cout<<lown<<"/"<<lowd;
}
