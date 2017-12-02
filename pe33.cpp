#include<iostream>

using namespace std;

bool check(float i,float j)
{
	float num1,num2,den1,den2;
	num2 = (int)i%10;
	den2 = (int)j%10;
	num1 = (int)i/10;
	num1 = (int)num1%10;
	den1 = (int)j/10;
	den1 = (int)den1%10;
	
	if(num1 != den1 && num1 != den2 && num2 != den1 && num2 != den2)
		return 0;
	
	if( (num1 == den1 && i/j == num2/den2) || (num1 == den2 && i/j == num2/den1) || (num2 == den1 && i/j == num1/den2) || (num2 == den2 && i/j == num1/den1) )
		return 1;
}

int main()
{
	int num=1,den=1;
	for(float i=11;i<100;i++)
	{
		if((int)i%10 == 0)
			i++;
		for(float j=i+1;j<100;j++)
		{
			if((int)j%10==0)
				j++;
			if(check(i,j)==0)
				continue;
			num*=i;
			den*=j;
			cout<<i<<"/"<<j<<endl;
		}
	}
	cout<<num<<endl<<den;
}
