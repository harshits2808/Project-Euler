#include "all.h"

ull harshad[20000][2];
ull sharshad[20000];

int main()
{
	for(int i = 1;i<10;i++)
		harshad[i-1][0]=harshad[i-1][1]=i;
	int hmax=9;
	int hmin=0;
	int sh=0;
	for(int i=0;i<13;i++)
	{
	//	cout<<"hey";
		int s = hmax;
		for(int j = hmin;j<hmax;j++)
		{
			for(int k=0;k<10;k++)
			{
				ull num = harshad[j][0]*10 + k;
				ull d = harshad[j][1] + k;
	//			cout<<d<<endl;
				if(num%d==0)
				{
					harshad[s][0]=num;
					harshad[s++][1]=d;
					if(isprime(num/d)==1)
						sharshad[sh++]=num;
				}
				if(s==ten6)
					cout<<i;
			}
		}
	//	cout<<"hey";
		hmin = hmax;
		hmax=s;
	}

	cout<<hmax<<" "<<harshad[hmax-1][0]<<" "<<sh<<endl;
	ull sum=0;
	for(int i=0;i<sh;i++)
	{
//		cout<<sharshad[i]<<" "<<sharshad[i]/sumdig(sharshad[i])<<endl;
		if(sharshad[i]*10 >= 100000000000000)
			break;
		for(int j=1;j<10;j+=2)
			if(isprime(sharshad[i]*10+j)==1)
				sum+=sharshad[i]*10+j;
	}
	cout<<sum;
	
}
