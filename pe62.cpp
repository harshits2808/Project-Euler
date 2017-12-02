#include<iostream>
#include "define.h"
#include "functions.h"
using namespace std;

pair <unsigned long long int,int> A[ten6]; 

int main()
{
	for(int i=1;i<ten6;i++)
	{
		A[i].first = power(i,3);
		A[i].second = nodig(A[i].first);
	}
	int j=1;

	for(int i=1;i<=18;i++)
	{
		//cout<<"i = "<<i<<endl;
		while(A[j].second==i)
		{
			//cout<<"here"<<endl;
			int k = j+1;
			int count = 1;
			while(A[k].second==i)
			{
				if(isperm(A[j].first,A[k].first) == 1)
					count++;
				k++;
				//cout<<count<<endl;
			}
			if(count == 5)
				cout<<A[j].first<<endl;
			j++;
		}
	}
}
