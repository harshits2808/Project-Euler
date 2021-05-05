#include "all.h"
using namespace std;

long long int limit = 100000000;
bool prime[100000000];

void SieveOfAtkin()
{
	
    // 2 and 3 are known to be prime
    if (limit > 2)  prime[2]=1;
    if (limit > 3)  prime[3]=1;
 
    // Initialise the prime array with false values
    
    memset(prime,0,sizeof(prime));
 
    /* Mark siev[n] is true if one of the following is true:
     a) n = (4*x*x)+(y*y) has odd number of solutions, i.e., there exist
        odd number of distinct pairs (x, y) that satisfy the equation and
        n % 12 = 1 or n % 12 = 5.
     b) n = (3*x*x)+(y*y) has odd number of solutions and n % 12 = 7
     c) n = (3*x*x)-(y*y) has odd number of solutions, x > y and n % 12 = 11 */
    for (int x = 1; x*x < limit; x++)
    {
        for (int y = 1; y*y < limit; y++)
        {
            // Main part of Sieve of Atkin
            int n = (4*x*x)+(y*y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                prime[n] ^= true;
 
            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                prime[n] ^= true;
 
            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                prime[n] ^= true;
        }
    }
 
    // Mark all multiples of squares as non-prime
    for (int r = 5; r*r < limit; r++)
    {
        if (prime[r])
        {
            for (int i = r*r; i < limit; i += r*r)
                prime[i] = false;
         }
    }
}

unsigned long long int power(unsigned long long int x,unsigned  long long int y,unsigned  long long int m)
{
    if (y == 0)
        return 1;
    unsigned long long int p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}

int main()
{
	memset(prime,0,sizeof(prime));
	SieveOfAtkin();

//	cout<<"Done\n"<<c<<endl<<prime[c-1]<<endl;

	unsigned long long int ans=0;

	for(unsigned long long int i=2;i<limit;i++)
	{
		if(prime[i]==0)
			continue;

		unsigned long long int p=i;
		unsigned long long int val = 0;

		val += (p-1)/2;
		val += power(6,p-2,p);
		val += (power(24,p-2,p)*(p-1))%p;
		val = val%p;

		ans += val;

	//	cout<<prime[i]<<" "<<(p-1)/2<<" "<<power(6,p-2,p)<<" "<<(power(24,p-2,p)*(p-1))%p<<endl;
	//	system("pause");
	}
	cout<<ans;
}
