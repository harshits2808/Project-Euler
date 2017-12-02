#include<iostream>
#include "functions.h"
#include "define.h"

using namespace std;

#define MAX 4*ten7+1
int phi[MAX];

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
	long long int sum=0;
	for(int i=2;i<MAX;i++)
	{
		if(isprime(i)==0)
			continue;
		
		int t = phi[i];
		int c = 2;
		while(t != 1 && c<=25)
		{
			t = phi[t];
			c++;
		}
		
		if(c==25)
			sum += i;
	}
	cout<<sum;
}
