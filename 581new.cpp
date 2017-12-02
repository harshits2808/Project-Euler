#include "all.h"

ld Pn[1000000],Qn[1000000];
ull a[1000000],p[1000000],q[1000000];

ull Pell(ll D)
{
ull x1,y1;
ull n,r;
if (sqrt(D)!=floor(sqrt(D)))

{
	//Initialization
	Pn[0]=0;Qn[0]=1;
	a[0]=floor(sqrt(D));
	p[0]=a[0];q[0]=1;

	n=1;
	Pn[1]=a[0];
	Qn[1]=D-a[0]*a[0];
	a[1]=floor((a[0]+Pn[1])/Qn[1]);
	p[1]=a[0]*a[1]+1.0;
	q[1]=a[1];

	while (a[n]!=2.0*a[0])
	{
		n=n+1;
		Pn[n]=a[n-1]*Qn[n-1]-Pn[n-1];
		Qn[n]=(D-Pn[n]*Pn[n])/Qn[n-1];
		a[n]=floor((a[0]+Pn[n])/Qn[n]);
		p[n]=a[n]*p[n-1]+p[n-2];
		q[n]=a[n]*q[n-1]+q[n-2];
	}
	r=n-1;
	if (r%2==0)
	{
		for (n=r+2;n<=2*r+1;n++) 
		{ 
			Pn[n]=a[n-1]*Qn[n-1]-Pn[n-1]; 
			Qn[n]=(D-Pn[n]*Pn[n])/Qn[n-1]; 
			a[n]=floor((a[0]+Pn[n])/Qn[n]); 
			p[n]=a[n]*p[n-1]+p[n-2]; 
			q[n]=a[n]*q[n-1]+q[n-2]; 
		} 
		x1=p[2*r+1]; 
		y1=q[2*r+1]; 
	} 
	else 
	{ 
		x1=p[r]; 
		y1=q[r]; 
	} 
	return x1; 
} 
else return 0;
}

ull Pell2(ll D)
{
ull x1,y1;
ull n,r;
if (sqrt(D)!=floor(sqrt(D)))

{
	//Initialization
	Pn[0]=0;Qn[0]=1;
	a[0]=floor(sqrt(D));
	p[0]=a[0];q[0]=1;

	n=1;
	Pn[1]=a[0];
	Qn[1]=D-a[0]*a[0];
	a[1]=floor((a[0]+Pn[1])/Qn[1]);
	p[1]=a[0]*a[1]+1.0;
	q[1]=a[1];

	while (a[n]!=2.0*a[0])
	{
		n=n+1;
		Pn[n]=a[n-1]*Qn[n-1]-Pn[n-1];
		Qn[n]=(D-Pn[n]*Pn[n])/Qn[n-1];
		a[n]=floor((a[0]+Pn[n])/Qn[n]);
		p[n]=a[n]*p[n-1]+p[n-2];
		q[n]=a[n]*q[n-1]+q[n-2];
	}
	r=n-1;
	if (r%2==0)
	{
		for (n=r+2;n<=2*r+1;n++) 
		{ 
			Pn[n]=a[n-1]*Qn[n-1]-Pn[n-1]; 
			Qn[n]=(D-Pn[n]*Pn[n])/Qn[n-1]; 
			a[n]=floor((a[0]+Pn[n])/Qn[n]); 
			p[n]=a[n]*p[n-1]+p[n-2]; 
			q[n]=a[n]*q[n-1]+q[n-2]; 
		} 
		x1=p[2*r+1]; 
		y1=q[2*r+1]; 
	} 
	else 
	{ 
		x1=p[r]; 
		y1=q[r]; 
	} 
	return y1; 
} 
else return 0;
}

int prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

bool issmooth(ll n)
{
	for(int i=0;i<15 && n > 1;i++)
		while(n % prime[i] == 0 )
			n = n/prime[i];
	if(n==1)
		return 1;
	return 0;
}

ull ans[2000];
int ca=0;

void find_sol(ull num)
{
	ull  x1 = Pell(2*num);
	ull y1 = Pell2(2*num);
	ull n1 = (x1+1)/2;
	ull n2 = (x1-1)/2;
//	cout<<n1<<endl;
	ld tx1 = x1;
	ld txk = x1;
	ld ty1 = y1;
	ld tyk = y1;
	ull xk = x1;
	ull yk = y1;
//	if(num == 1)
//		cout<<x1<<" "<<y1<<endl;
	if(n1 > 1109496723126)
		return;
	if(issmooth(n1)==1 && issmooth(n2)==1)
		ans[ca++]=n2;
	for(int i=1;i<24;i++)
	{
		txk = txk*tx1 + 2*num*tyk*ty1;
		if(txk > 2218993446251)
			break;
		
		ull temp = xk;
		xk = xk*x1 + 2*num*yk*y1;
		yk = temp*y1 + yk*x1;
		
		n1 = (xk+1)/2;
		n2 = (xk-1)/2;
//		cout<<n1<<endl;
		
		if(issmooth(n1)==1 && issmooth(n2)==1)
			ans[ca++]=n2;
	}
}

int main()
{
	for(int i2=0;i2<2;i2++)
	for(int i3=0;i3<2;i3++)
	for(int i5=0;i5<2;i5++)
	for(int i7=0;i7<2;i7++)
	for(int i11=0;i11<2;i11++)
	for(int i13=0;i13<2;i13++)
	for(int i17=0;i17<2;i17++)
	for(int i19=0;i19<2;i19++)
	for(int i23=0;i23<2;i23++)
	for(int i29=0;i29<2;i29++)
	for(int i31=0;i31<2;i31++)
	for(int i37=0;i37<2;i37++)
	for(int i41=0;i41<2;i41++)
	for(int i43=0;i43<2;i43++)
	for(int i47=0;i47<2;i47++)
	{
		ull num = pow(2,i2)*pow(3,i3)*pow(5,i5)*pow(7,i7)*pow(11,i11)*pow(13,i13)*pow(17,i17)*pow(19,i19)*pow(23,i23)*pow(29,i29)*pow(31,i31)*pow(37,i37)*pow(41,i41)*pow(43,i43)*pow(47,i47);
		if( num==2)
			continue;
		find_sol(num);
	}
//	cout<<ca;
	ull sum=ans[0];
//	cout<<ans[0]<<endl;
	sort(ans,ans+ca);
	for(int i=1;i<ca;i++)
	{
		if(ans[i]!=ans[i-1])
			sum+=ans[i];
	}
	cout<<sum;
}
