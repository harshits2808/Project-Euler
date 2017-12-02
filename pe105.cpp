#include "all.h"

int solve(string str)
{
	vector <int> A;
	vector < pair<int,int> > sub;
	int num=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==',') 
		{
			A.push_back(num);
			num=0;
		}
		else
			num = num*10 + str[i]-48;
	}
	
	A.push_back(num);

	int n = A.size();

	for(int i=1;i<pow(2,n);i++)
	{
		num = i;
		sub.push_back(make_pair(0,0));
		for(int j=0;j<n;j++,num/=2)
			if(num%2 == 1)
			{
				sub[i-1].first += A[j];
				sub[i-1].second += 1;
			}
	}

	sort(sub.begin(),sub.end());
//	for(int i=0;i<sub.size();i++) cout<<sub[i].first<<endl;
//	cout<<endl;
	for(int i=1;i<sub.size();i++)
	{	
		if(sub[i].first == sub[i-1].first)
			return 0;
		if(sub[i].second < sub[i-1].second)
			return 0;
	}
//	cout<<sub[sub.size()-1].first<<endl;
	return sub[sub.size()-1].first;
}

int main()
{
	string str;
	int ans=0;
	ifstream fin("p105_sets.txt");
	while(!fin.eof())
	{
		if(fin.eof()) break;
		getline(fin,str);
		ans += solve(str);
	}
	cout<<ans;
	fin.close();
}
