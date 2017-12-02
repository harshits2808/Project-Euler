#include<iostream>
#include<cstring>

using namespace std;

#define limit 100000002
bool sieve[limit];

void SieveOfAtkin()
{
    // 2 and 3 are known to be prime
    if (limit > 2)  sieve[2]=1;
    if (limit > 3)  sieve[3]=1;
 
    memset(sieve,0,sizeof(sieve));
 
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
                sieve[n] ^= true;
 
            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;
 
            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }
 
    // Mark all multiples of squares as non-prime
    for (int r = 5; r*r < limit; r++)
    {
        if (sieve[r])
        {
            for (int i = r*r; i < limit; i += r*r)
                sieve[i] = false;
         }
    }

    if (limit > 2)  sieve[2]=1;
    if (limit > 3)  sieve[3]=1;
 
}

bool check(int n)
{
//	cout<<"here1\n";
//	cout<<sieve[n+1]<<" "<<n+1<<endl;
	if(sieve[n+1] != 1)
		return 0;
//	cout<<"here2\n";
	for(int i=2;i*i<=n;i++)
		if(n%i == 0)
			if(sieve[i+n/i] != 1)
				return 0;
//	cout<<"here3\n";
	return 1;
}

int main()
{
	SieveOfAtkin();
//	cout<<check(2)<<endl;
	unsigned long long int c=0;
	cout<<"Sieve done\n";
	for(int i=1;i<=100000000;i++)
		if(check(i)==1)
			c+=i;
	cout<<c;
}
