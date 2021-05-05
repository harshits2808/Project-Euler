#include<iostream>

using namespace std;

int phi[1000001];
#define MAX 1000001

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
	int sum=0;
	for(int i=1;i=8;i++)
		sum+=phi[i];
	cout<<sum;
}
