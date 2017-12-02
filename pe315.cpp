#include "all.h"

int seg[10] = {6,2,5,5,4,5,6,4,7,6};
bool bit[10][7] = { {1,1,1,0,1,1,1} , {0,0,1,0,0,1,0} , {1,0,1,1,1,0,1} , {1,0,1,1,0,1,1} , {0,1,1,1,0,1,0} , {1,1,0,1,0,1,1} , {1,1,0,1,1,1,1} , {1,1,1,0,0,1,0} , {1,1,1,1,1,1,1} , {1,1,1,1,0,1,1}};
int common[10][10];

bool prime[20000005];

int tot_sam=0;
int tot_max=0;

void feed(int n)
{
	int t = n;
	while(t>0)
	{
		tot_sam += 2*seg[t%10];
		tot_max += 2*seg[t%10];
		t/=10;
	}
	if(nodig(n)>1)
	{
		int s = sumdig(n);
		t = n;
		while(s>0 && t>0)
		{
			tot_max -= 2*common[s%10][t%10];
			s/=10;
			t/=10;
		}
		feed(sumdig(n));
	}
}

int com(int i,int j)
{int ans=0;
	for(int a = 0;a<7;a++)
		if(bit[i][a] == 1 && bit[j][a] == 1)
			ans++;
	return ans;
}

int main()
{
	loop(10) for(int j=0;j<10;j++) common[j][i]=com(i,j);

	ms(prime);
	
	for(int i=2;i<20000000;i++)
	{
		if(prime[i]==1) continue;
		for(int j=2*i;j<20000000;j+=i)
			prime[j] = 1;
	}
	
	for(int i=10000000;i<20000000;i++)
		if(!prime[i])
		feed(i);//	cout<<i<<endl;
//	feed(137);
	cout<<tot_sam-tot_max;
}
