#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("p099_base_exp.txt");
	long double n,e;
	char ch;
	long double max=0,num;
	int maxline,line=0;
	while(!fin.eof())
	{
		if(fin.eof()) break;
		fin>>n>>ch>>e;
		num = e*log10(n);
		cout<<(setprecision(10))<<num<<endl;
		line++;
		if(max>num)
			continue;
		max=num;
		maxline = line;
}
	cout<<maxline<<endl<<line;
	fin.close();
}
