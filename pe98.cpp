#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>

using namespace std;

string str[2500];

bool An(string str1, string str2)
{
    // Create a count array and initialize all values as 0
    int count[26] = {0};
    int i;
 
    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        if(str1[i]=='"') continue;
		count[str1[i]-65]++;
        count[str2[i]-65]--;
    }
 
    // If both strings are of different length. Removing this condition
    // will make the program fail for strings like "aaca" and "aca"
    if (str1[i] || str2[i])
      return false;
 
    // See if there is any non-zero value in count array
    for (i = 0; i < 26; i++)
        if (count[i])
            return false;
     return true;
}

int main()
{
	string str[2000];

	ifstream fin;
	fin.open("p098_words.txt");
	int c=0;

	while(!fin.eof())
	{
		getline(fin,str[c++],',');
	//	cout<<str[c-1]<<" "<<c<<endl;
	}

	for(int i=0;i<c;i++)
		for(int j=i+1;j<c;j++)
			if(An(str[i],str[j]) == 1)
				cout<<str[i]<<" "<<str[j]<<endl;

	fin.close();

//	Best contender : "INTRODUCE" "REDUCTION"

	for(long long int i0 = 1;i0<10;i0++)
	{
		for(long long int i1 = 0;i1<10;i1++)
		{
			if(i1 == i0)
				continue;
			for(int i2 = 0;i2<10;i2++)
			{
				if(i2==i1 || i2==i0)
					continue;
				for(long long int i3 = 0;i3<10;i3++)
				{
					if(i3==i2 || i3==i1 || i3==i0)
						continue;
				//	if((i1*100+i2*10+i3) % 2 != 0)
				//		continue;
					for(int i4 = 0;i4<10;i4++)
					{
						if(i4==i3 || i4==i2 || i4==i1 || i4==i0)
							continue;
				//		if((i2*100+i3*10+i4) % 3 != 0)
				//			continue;
						for(int i5 = 0;i5<10;i5++)
						{
							if(i5==i4 || i5==i3 || i5==i2 || i5==i1 || i5==i0)
								continue;
				//			if((i3*100+i4*10+i5) % 5 != 0)
				//				continue;
							for(int i6 = 0;i6<10;i6++)
							{
								if(i6==i5 || i6==i4 || i6==i3 || i6==i2 || i6==i1 || i6==i0)
									continue;
				//				if((i4*100+i5*10+i6) % 7 != 0)
				//					continue;
								for(int i7 = 0;i7<10;i7++)
								{
									if(i7==i6 || i7==i5 || i7==i4 || i7==i3 || i7==i2 || i7==i1 || i7==i0)
										continue;
				//					if((i5*100+i6*10+i7) % 11 != 0)
				//						continue;
									
				//						if((i6*100+i7*10+i8 )% 13 != 0)
				//							continue;
										
				//							if((i7*100+i8*10+i9) % 17 != 0)
				//								continue;
											long long int s;
											s = i0*10000000 + i1*1000000 + i2*100000 + i3*10000 + i4*1000 + i5*100 + i6*10 + i7 ;
											long long int s2;
											s2 = i1*10000000 + i2*1000000 + i3*100000 + i0*10000 + i4*1000 + i5*100 + i6*10 + i7;
											long long int sq = sqrt(s);
											long long int sq2 = sqrt(s2);
											if(sq*sq == s && sq2*sq2 == s2)
												cout<<s<<" "<<s2<<endl;
											//	Best contender : "INTRODUCE" "REDUCTION" then "CREATION" "REACTION"
									
								}
							}
						}
					}
				}
			}
		}
	}
}
