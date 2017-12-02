#include<iostream>

using namespace std;

#define MAX 1000001
long long int arr[MAX];
long long int H[MAX];

int bs( int l, int r, long long int x)
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
	for(long long int i=1;i<MAX;i++)
	{
		H[i]=i*(2*i-1);
		arr[i]=i*(3*i-1)/2;
	}
	for(int i=1;i<MAX;i++)
		if( bs(0,MAX-1,H[i]) != -1)
			cout<<H[i]<<endl;
}
