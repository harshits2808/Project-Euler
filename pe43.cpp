#include<iostream>

using namespace std;

int main()
{
	long long int sum=0;
	for(long long int i0 = 1;i0<10;i0++)
	{
		for(int i1 = 0;i1<10;i1++)
		{
			if(i1 == i0)
				continue;
			for(int i2 = 0;i2<10;i2++)
			{
				if(i2==i1 || i2==i0)
					continue;
				for(int i3 = 0;i3<10;i3++)
				{
					if(i3==i2 || i3==i1 || i3==i0)
						continue;
					if((i1*100+i2*10+i3) % 2 != 0)
						continue;
					for(int i4 = 0;i4<10;i4++)
					{
						if(i4==i3 || i4==i2 || i4==i1 || i4==i0)
							continue;
						if((i2*100+i3*10+i4) % 3 != 0)
							continue;
						for(int i5 = 0;i5<10;i5++)
						{
							if(i5==i4 || i5==i3 || i5==i2 || i5==i1 || i5==i0)
								continue;
							if((i3*100+i4*10+i5) % 5 != 0)
								continue;
							for(int i6 = 0;i6<10;i6++)
							{
								if(i6==i5 || i6==i4 || i6==i3 || i6==i2 || i6==i1 || i6==i0)
									continue;
								if((i4*100+i5*10+i6) % 7 != 0)
									continue;
								for(int i7 = 0;i7<10;i7++)
								{
									if(i7==i6 || i7==i5 || i7==i4 || i7==i3 || i7==i2 || i7==i1 || i7==i0)
										continue;
									if((i5*100+i6*10+i7) % 11 != 0)
										continue;
									for(int i8 = 0;i8<10;i8++)
									{
										if(i8==i7 || i8==i6 || i8==i5 || i8==i4 || i8==i3 || i8==i2 || i8==i1 || i8==i0)
											continue;
										if((i6*100+i7*10+i8 )% 13 != 0)
											continue;
										for(int i9 = 0;i9<10;i9++)
										{
											if(i9==i8 || i9==i7 || i9==i6 || i9==i5 || i9==i4 || i9==i3 || i9==i2 || i9==i1 || i9==i0)
												continue;
											if((i7*100+i8*10+i9) % 17 != 0)
												continue;
											long long int s;
											s = i0*1000000000 + i1*100000000 + i2*10000000 + i3*1000000 + i4*100000 + i5*10000 + i6*1000 + i7*100 + i8*10 + i9;
											sum += s;
											cout<<s<<endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<sum;
}
