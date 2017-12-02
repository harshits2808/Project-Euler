#include "all.h"

ll area(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3)
{
	return (abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
}

bool check(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3)
{
	ll A = area(x1,y1,x2,y2,x3,y3);
	ll A1 = area(0,0,x2,y2,x3,y3);
	ll A2 = area(x1,y1,0,0,x3,y3);
	ll A3 = area(x1,y1,x2,y2,0,0);

//	cout<<A<<" "<<A1<<" "<<A2<<" "<<A3<<endl;
	
	if(A == A1 + A2 + A3)
		return 1;
	return 0;

}

int main()
{
	ifstream fin("p102_triangles.txt");
	char ch;
	int x[4],y[4];
	int count = 0;
	while(!fin.eof())
	{
		if(fin.eof())
			break;
		fin>>x[1]>>ch>>y[1];
		fin>>ch;
		fin>>x[2]>>ch>>y[2];
		fin>>ch;
		fin>>x[3]>>ch>>y[3];
		count += check(x[1],y[1],x[2],y[2],x[3],y[3]);
	}

	cout<<count<<endl;
	fin.close();
}
