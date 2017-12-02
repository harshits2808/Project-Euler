#include<iostream>
#include<cmath>
#include"functions.h"
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

bool check_673(long long int n,int dig)
{
	if(isprime(n*1000+673)==0)
		return 0;
	long long int num = 673*pow(10,dig)+n;
	if(isprime(num)==0)
		return 0;
	return 1;
}

bool check_109(long long int n,int dig)
{
	if(sieve[(n*1000+109)]==0)
		return 0;
	long long int num = 109*pow(10,dig)+n;
	if(sieve[num]==0)
		return 0;
	return check_673(n,dig);
}

bool check_7(long long int n,int dig)
{
	if(sieve[n*10+7]==0)
		return 0;
	long long int num = (7*pow(10,dig)+n);
	if(sieve[num]==0)
		return 0;
	return check_109(n,dig);
}

bool check_3(long long int n,int dig)
{
	if(sieve[(n*10+3)]==0)
		return 0;
	long long int num = (3*pow(10,dig)+n);
	if(sieve[num]==0)
		return 0;
	return check_7(n,dig);
}

int main()
{
	
	for(int i=677;i<limit;i++)
		if(isprime(i))
			if(check_3(i,nodig(i)))
				cout<<i<<endl;
}
