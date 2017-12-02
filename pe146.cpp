#include "all.h"

int main()
{
	for(ll i=10;i<=1000000;i+=10)
	{
		ll n = i*i;
		if(n%3 == 1)
		if(isprime(n+1))
			if(isprime(n+3))
				if(isprime(n+7))
					if(isprime(n+9))
						if(isprime(n+13))
							if(isprime(n+19)==0)
								if(isprime(n+21)==0)
									if(isprime(n+27))
										cout<<i<<" "<<n<<endl;
	}
}
