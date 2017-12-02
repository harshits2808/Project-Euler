#include<iostream>

// 	NOT SURE WHY IT DOESN'T WORK AS EXPECTED !! BUT IT DOES GIVE THE CORRECT ANSWER !!

using namespace std;

int tri(int n)
{
	return n*(n+1)/2;
}
int sq(int n)
{
	return n*n;
}
int pent(int n)
{
	return n*(3*n-1)/2;
}
int hex(int n)
{
	return n*(2*n-1);
}
int hept(int n)
{
	return n*(5*n-3)/2;
}
int oct(int n)
{
	return n*(3*n-2);
}

int a3[200][3];
int a4[100][3];
int a5[100][3];
int a6[100][3];
int a7[100][3];
int a8[100][3];
int c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;

int sq(int,int,bool []);
int pent(int,int,bool []);
int hex(int,int,bool []);
int hept(int,int,bool []);
int oct(int,int,bool []);

int count=0;

int oct(int TH,int TO,bool ch[])
{
	bool temp[9];
	for(int i=3;i<9;i++)
		temp[i]=ch[i];
	temp[8]=1;
	bool check=1;
	for(int i=0;i<c8;i++)
	{
		if(TO != a8[i][1])
			continue;

		TO = a8[i][2];
		int num = a8[i][0];
		check=1;
	/*	if(ch[3]==0)
		{
			check=0;
			int n = tri(TH,TO,temp);
			if(n > 0)
				return n+num;
		}
	*/
		if(temp[4]==0)
		{
			check=0;
			int n = sq(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}		
	
		if(temp[5]==0)
		{
			check=0;
			int n = pent(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[6]==0)
		{
			check = 0;
			int n = hex(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[7]==0)
		{
			check = 0;
			int n = hept(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}		
		}
		
		if(temp[8]==0)
		{
			check = 0;
			int n = oct(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(check == 1 && TO == TH)
		{	cout<<num<<" "<<TH<<" ";	return num;}	
	}
	return 0;
}

int hept(int TH,int TO,bool ch[])
{
	bool temp[9];
	for(int i=3;i<9;i++)
		temp[i]=ch[i];
	temp[7]=1;
	bool check=1;
	for(int i=0;i<c7;i++)
	{
		if(TO != a7[i][1])
			continue;

		TO = a7[i][2];
		int num = a7[i][0];
		check=1;
	/*	if(ch[3]==0)
		{
			check=0;
			int n = tri(TH,TO,temp);
			if(n > 0)
				return n+num;
		}
	*/

		if(temp[4]==0)
		{
			check=0;
			int n = sq(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}		
	
		if(temp[5]==0)
		{
			check=0;
			int n = pent(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[6]==0)
		{
			check = 0;
			int n = hex(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[7]==0)
		{
			check = 0;
			int n = hept(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}		
		}
		
		if(temp[8]==0)
		{
			check = 0;
			int n = oct(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(check == 1 && TO == TH)
		{	cout<<num<<" "<<TH<<" ";	return num;}	
	}
	return 0;
}

int hex(int TH,int TO,bool ch[])
{
	bool temp[9];
	for(int i=3;i<9;i++)
		temp[i]=ch[i];
	temp[6]=1;
	bool check=1;
	for(int i=0;i<c6;i++)
	{
		if(TO != a6[i][1])
			continue;
/*		if(a6[i][0] == 5356)
			cout<<TH<<" "<<TO<<endl;
		if(TO==16 && TH==20)
			cout<<a6[i][0]<<" "<<a6[i][1]<<" "<<a6[i][2]<<endl;
*/
		TO = a6[i][2];
		int num = a6[i][0];
		check=1;
	/*	if(ch[3]==0)
		{
			check=0;
			int n = tri(TH,TO,temp);
			if(n > 0)
				return n+num;
		}
	*/

		if(temp[4]==0)
		{
			check=0;
			int n = sq(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}		
	
		if(temp[5]==0)
		{
			check=0;
			int n = pent(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[6]==0)
		{
			check = 0;
			int n = hex(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[7]==0)
		{
			check = 0;
			int n = hept(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(temp[8]==0)
		{
			check = 0;
			int n = oct(TH,TO,temp);
				if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(check == 1 && TO == TH)
		{	cout<<num<<" "<<TH<<" ";	return num;}	
	}
	return 0;
}

int pent(int TH,int TO,bool ch[])
{
	bool temp[9];
	for(int i=3;i<9;i++)
		temp[i]=ch[i];
	temp[5]=1;
	bool check=1;
	for(int i=0;i<c5;i++)
	{
		if(TO != a5[i][1])
			continue;

		TO = a5[i][2];
		int num = a5[i][0];
		check=1;
	/*	if(ch[3]==0)
		{
			check=0;
			int n = tri(TH,TO,temp);
			if(n > 0)
				return n+num;
		}
	*/

		if(temp[4]==0)
		{
			check=0;
			int n = sq(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}		
	
		if(temp[5]==0)
		{
			check=0;
			int n = pent(TH,TO,temp);
				if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[6]==0)
		{
			check = 0;
			int n = hex(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[7]==0)
		{
			check = 0;
			int n = hept(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(temp[8]==0)
		{
			check = 0;
			int n = oct(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(check == 1 && TO == TH)
		{	cout<<num<<" "<<TH<<" ";	return num;}	
	}
	return 0;
}

int sq(int TH,int TO,bool ch[])
{
//	cout<<"sq initiated "<<++count<<endl;;
	bool temp[9];
	for(int i=3;i<9;i++)
		temp[i]=ch[i];
	temp[4]=1;
	bool check=1;
	for(int i=0;i<c4;i++)
	{
		if(TO != a4[i][1])
			continue;

		TO = a4[i][2];
		int num=a4[i][0];
		check=1;
	/*	if(ch[3]==0)
		{
			check=0;
			int n = tri(TH,TO,temp);
			if(n > 0)
				return n+a4[i][0];
		}
	*/
		if(temp[4]==0)
		{
			check=0;
			int n = sq(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}		
	
		if(temp[5]==0)
		{
			check=0;
			int n = pent(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[6]==0)
		{
			check = 0;
			int n = hex(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}
		}
		
		if(temp[7]==0)
		{
			check = 0;
			int n = hept(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}		
		}
		
		if(temp[8]==0)
		{
			check = 0;
			int n = oct(TH,TO,temp);
			if(n > 0)
			{
				cout<<num<<" ";
				return n+num;
			}	
		}
		
		if(check == 1 && TO == TH)
		{	cout<<num<<" "<<TH<<" ";	return num;}
	}
	return 0;
}

int tri()
{
	bool temp[9];
	int numbers[6];
	for(int i=3;i<9;i++)
		temp[i]=0;
	temp[3]=1;
	bool check=1;
	for(int i=0;i<c3;i++)
	{
		int TO = a3[i][2];
		int TH = a3[i][1];

	//	numbers[]=a3[i][0];

	/*	if(ch[3]==0)
		{
			check=0;
			int n = tri(TH,TO,temp);
			if(n > 0)
				return n+a4[i][0];
		}
	*/
		if(temp[4]==0)
		{
			check=0;
//			cout<<"hey";
			int n = sq(TH,TO,temp);
			if(n > 0)
			{ cout<<a3[i][0]<<" "; return n+a3[i][0];}
		}		
	
		if(temp[5]==0)
		{
			check=0;
//			cout<<"hey";
			int n = pent(TH,TO,temp);
			if(n>0)
				return n+a3[i][0];
		}
		
		if(temp[6]==0)
		{
			check = 0;
//			cout<<"hey";
			int n = hex(TH,TO,temp);
			if(n>0)
			{ cout<<a3[i][0]<<" "; return n+a3[i][0];}
		}
		
		if(temp[7]==0)
		{
			check = 0;
//			cout<<"hey";
			int n = hept(TH,TO,temp);
			if(n>0)
			{ cout<<a3[i][0]<<" "; return n+a3[i][0];}
		}
		
		if(temp[8]==0)
		{
			check = 0;
			int n = oct(TH,TO,temp);
			if(n>0)
			{ cout<<a3[i][0]<<" "; return n+a3[i][0];}
		}
		
		if(check == 1 && TO == TH)
		{	cout<<a3[i][0]<<" "; return a3[i][0];}
	}
	return 0;
}

int main()
{
	for(int i=1;tri(i)<10000;i++)
		if(tri(i)>1000)
		{
			a3[c3++][0]=tri(i);
			int n = tri(i);
			a3[c3-1][2]=n%100;
			n = n/100;
			a3[c3-1][1]=n;
		}

	for(int i=1;sq(i)<10000;i++)
		if(sq(i)>1000)
		{
			a4[c4++][0]=sq(i);
			int n = sq(i);
			a4[c4-1][2]=n%100;
			n = n/100;
			a4[c4-1][1]=n;
		}

	for(int i=1;pent(i)<10000;i++)
		if(pent(i)>1000)
		{
			a5[c5++][0]=pent(i);
			int n = pent(i);
			a5[c5-1][2]=n%100;
			n = n/100;
			a5[c5-1][1]=n;
		}

	for(int i=1;hex(i)<10000;i++)
		if(hex(i)>1000)
		{
			a6[c6++][0]=hex(i);
			int n = hex(i);
			a6[c6-1][2]=n%100;
			n = n/100;
			a6[c6-1][1]=n;
		}

	for(int i=1;hept(i)<10000;i++)
		if(hept(i)>1000)
		{
			a7[c7++][0]=hept(i);
			int n = hept(i);
			a7[c7-1][2]=n%100;
			n = n/100;
			a7[c7-1][1]=n;
		}

	for(int i=1;oct(i)<10000;i++)
		if(oct(i)>1000)
		{
			a8[c8++][0]=oct(i);
			int n = oct(i);
			a8[c8-1][2]=n%100;
			n = n/100;
			a8[c8-1][1]=n;
		}

/*	for(int i=0;i<c3;i++)
		for(int j=0;j<c4;j++)
			if(a3[i][2] == a4[j][1])
				for(int k=0;k<c5;k++)
					if(a4[j][2]==a5[k][1])
						for(int l=0;l<c6;l++)
							if(a5[k][2] == a6[l][1])
								for(int m=0;m<c6;m++)
									if(a6[l][2] == a7[m][1])
										for(int n=0;n<c6;n++)
											if(a7[m][2] == a8[n][1])
								cout<<a3[i][0]<<" "<<a4[j][0]<<" "<<a5[k][0]<<" "<<a6[l][0]<<" "<<a7[m][0]<<" "<<a8[n][0]<<endl;

*/
	bool ch[9]={0,0,0,1,0,0,0,0,0};
	int n;
	for(int i=0;i<c3;i++)
		if(n=(sq(a3[i][1],a3[i][2],ch))>0)
			cout<<a3[i][0]<<" "<<n+a3[i][0]<<endl;
	cout<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<" "<<c7<<" "<<c8;
}
