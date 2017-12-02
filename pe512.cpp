#include<iostream>
#include "define.h"

using namespace std;

#define MAX 250000001
int phi[MAX];

void compute()
{
    // Refer https://goo.gl/LUqdtY
    phi[1] = 1;
    for (int i=3; i<2*MAX-1; i+=2)
    {
        if (!phi[(i+1)/2])
        {
            phi[(i+1)/2] = i-1;
            for (int j = 3*i; j<2*MAX-2; j = j + 2*i)
            {
                if (!phi[(j+1)/2])
                    phi[(j+1)/2] = j;
 
                phi[(j+1)/2] = (phi[(j+1)/2]/i)*(i-1);

            }
        }
    }
}

int main()
{
	compute();
	ull sum=0;
	for(int i=1;i<5*ten8;i+=2)
	{	
		ull n= phi[(i+1)/2];
		sum = sum+n;
	}
	cout<<sum;
}
