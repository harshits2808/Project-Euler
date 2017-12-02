#include<bits/stdc++.h>

long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

long long int power(long long int x, long long int y)
{
    unsigned long long int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

long long int power(long long int x, long long int y, long long int p)
{
    long long int res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}

bool isprime(long long int n)
{
	if(n==2)
		return 1;
	if(n%2 == 0 || n==1)
		return 0;
	for(long long int i=3;i*i<=n;i+=2)
		if(n%i==0)
			return 0;
	return 1;
}

int sumdig(long long int n)
{
	int ans = 0;

	while(n > 0)
	{
		int r = n%10;
		ans += r;
		n = n/10;
	}

	return ans;
}

int nodig(long long int n)
{
	int ans = 0;

	while(n > 0)
	{
		ans++;
		n = n/10;
	}
	
	return ans;
}

bool ispal(long long int n)
{
	long long int rev=0;
	long long int num = n;

	while(num > 0)
	{
		int r = num%10;
		rev = rev*10 + r;
		num = num/10;
	}
	
	if(rev == n)
		return 1;
	return 0;
}

bool isperm(long long int a,long long int b)
{
	int A[10] = {0,0,0,0,0,0,0,0,0,0};
	
	while(a>0 && b>0)
	{
		int r1 = a%10; int r2 = b%10;
		A[r1]++; A[r2]--;
		a = a/10; b= b/10;
	}
	
	if(a>0 || b>0)
		return 0;
	
	for(int i=0;i<10;i++)
		if(A[i] != 0)
			return 0;
	
	return 1;
}

long long int fact(long long int n)
{
	if(n==1 || n==0)
		return 1;
	return (n*fact(n-1));
}

long long int BS(long long int arr[], long long int l, long long int r, long long int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
 
    if (arr[m] == x) 
        return m;  
  
    if (arr[m] < x) 
        l = m + 1; 
 
    else
         r = m - 1; 
  }
 
  return -1; 
}

void prime_sieve(int arr[],int size)
{
	for(int i=0;i<size;i++)
		arr[i]=1;
	arr[0]=arr[1]=0;
	for(int i=2;i<size;i++)
		if(arr[i]=1)
			for(int j=2*i;j<size;j+=i)
				arr[j]=0;
}

void prime_sieve(bool arr[],int size)
{
	for(int i=0;i<size;i++)
		arr[i]=1;
	arr[0]=arr[1]=0;
	for(int i=2;i<size;i++)
		if(arr[i]=1)
			for(int j=2*i;j<size;j+=i)
				arr[j]=0;
}

void max_factor_sieve(int arr[],int size)
{
	for(int i=0;i<size;i++)
		arr[i]=1;
	arr[0]=0; arr[1]=1;
	for(int i=2;i<size;i++)
		if(arr[i]==1)
			for(int j=i;j<size;j+=i)
				arr[j]=i;	
}

void max_factor_sieve(long long int arr[],int size)
{
	for(int i=0;i<size;i++)
		arr[i]=1;
	arr[0]=0; arr[1]=1;
	for(int i=2;i<size;i++)
		if(arr[i]==1)
			for(int j=i;j<size;j+=i)
				arr[j]=i;	
}

long long int bin_sqrt(long long int n)
{
	if(n==0) return 0;
	if(n==1 || n==2 || n==3) return 1;
	long long int l = 2,r=n/2;
	long long int mid;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(mid*mid == n) return mid;
		if(mid*mid > n) r = mid-1;
		else l = mid+1;
	}
	if(mid*mid < n ) return mid;
	return mid-1;
}

long long int my_sqrt(long long int n)
{
	long long int sq = sqrt(n);
	if(sq*sq == n) return sq;
	sq--;
	if(sq*sq == n) return sq;
	sq+=2;
	if(sq*sq <= n) return sq;
	return (sq-1);
}

bool is_square(long long int n)
{
	long long int sq = sqrt(n);
	if(sq*sq == n) return 1;
	sq--;
	if(sq*sq == n) return 1;
	sq+=2;
	if(sq*sq == n) return 1;
	return 0;
}

long long int bin_cbrt(long long int n)
{
	if(n==0) return 0;
	if(n < 8) return 1;
	long long int l = 2,r=n/3;
	long long int mid;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(mid*mid*mid == n) return mid;
		if(mid*mid*mid > n) r = mid-1;
		else l = mid+1;
	}
	if(mid*mid*mid < n ) return mid;
	return mid-1;
}

long long int my_cbrt(long long int n)
{
	long long int cb = sqrt(n);
	if(cb*cb*cb == n) return cb;
	cb--;
	if(cb*cb*cb == n) return cb;
	cb+=2;
	if(cb*cb*cb <= n) return cb;
	return (cb-1);
}

bool is_cube(long long int n)
{
	long long int c = cbrt(n);
	if(c*c*c == n) return 1;
	c++;
	if(c*c*c == n) return 1;
	c-=2;
	if(c*c*c == n) return 1;
	return 0;
}

long long int gcdExtended(long long int a, long long int b, long long int *x, long long int *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    long long int x1, y1;
    long long int gcd = gcdExtended(b%a, a, &x1, &y1);

    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

long long int mod_inverse(long long int a, long long int m)
{
    long long int x, y;
    long long int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
	{
        std::cout << "\nInverse doesn't exist\n";
		return 0;
	}
    else
    {
        long long int res = (x%m + m) % m;
        return res;
    }
}
