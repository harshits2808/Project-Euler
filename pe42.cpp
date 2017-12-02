#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

int arr[20];

int bs( int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return bs( l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return bs(mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   return -1;
}

int main()
{
	for(int i=1;i*(i+1)/2<=192;i++)
		arr[i-1]=i*(i+1)/2;
	char ch,ch1;
	int m=0,count=0;
	ifstream fin;
	fin.open("p042_words.txt");
	while(!fin.eof())
	{
		if(fin.eof())
			break;
		fin>>ch;
		if(ch=='"')
		{
			int s=0;
			fin>>ch1;
			while( ch1 != '"')
			{
				s += ch1-64;
				fin>>ch1;
			}
			if(bs(0,18,s)!=-1)
				count++;
		}
	}
	fin.close()
	;cout<<count;
}
