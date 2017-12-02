#include<iostream>

using namespace std;

#define MAX 10000000

long double phi[MAX];

bool check(int a,int b)
{
	int c[10]={0,0,0,0,0,0,0,0,0,0};

	while (a) { c[a%10]++; a/=10; }
	while (b) { c[b%10]--; b/=10; }

	int res=1;
	for (int i=0;i<10;i++) res &= c[i]==0;
	if(res)
		return 1;
	return 0;
}


void compute()
{
    // Refer https://goo.gl/LUqdtY
    phi[1] = 1;
    for (int i=2; i<MAX; i++)
    {
        if (!phi[i])
        {
            phi[i] = i-1;
            for (int j = (i<<1); j<MAX; j+=i)
            {
                if (!phi[j])
                    phi[j] = j;
 
                phi[j] = (phi[j]/i)*(i-1);

            }
        }
    }
}

int main()
{
	compute();
	long double m=1000000000;
	int mval;
	for(int i=2;i<MAX;i++)
	{
		if(check(i,phi[i]))
			if(m > (long double)(i/phi[i]))
			{	m=(long double)(i/phi[i]); mval = i;}
	}
	cout<<mval;
}
