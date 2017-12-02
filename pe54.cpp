#include "all.h"

bool RSF(int card[5][2])
{
	if(card[0][1] != card[1][1] || card[1][1] != card[2][1] || card[2][1] != card[3][1] || card[3][1] != card[4][1])
		return 0;
	
	int ma = max(card[0][0],card[1][0],card[2][0],card[3][0],card[4][0]);
	int mi = min(card[0][0],card[1][0],card[2][0],card[3][0],card[4][0]);
	
	if(ma - mi == 4)
		return 1;
	return 0;
}

int SF(char card[5][2])
{
	if(card[0][1] != card[1][1] || card[1][1] != card[2][1] || card[2][1] != card[3][1] || card[3][1] != card[4][1])
		return 0;
	
	int ma = max(card[0][0],card[1][0],card[2][0],card[3][0],card[4][0]);
	int mi = min(card[0][0],card[1][0],card[2][0],card[3][0],card[4][0]);
	
	if(ma - mi == 4)
		return ma;
	return 0;	
}

bool check(string str)
{
	char card1[5][2];
	char card2[5][2];
	
	card1[0][0] = str[0];
	card1[0][1] = str[1];
	
	card1[1][0] = str[3];
	card1[1][1] = str[4];
	
	card1[2][0] = str[6];
	card1[2][1] = str[7];
	
	card1[3][0] = str[9];
	card1[3][1] = str[10];
	
	card1[4][0] = str[12];
	card1[4][1] = str[13];

	card2[0][0] = str[15];
	card2[0][1] = str[16];
	
	card2[1][0] = str[18];
	card2[1][1] = str[19];
	
	card2[2][0] = str[21];
	card2[2][1] = str[22];
	
	card2[3][0] = str[24];
	card2[3][1] = str[25];
	
	card2[4][0] = str[27];
	card2[4][1] = str[28];

	int icard1[5][2];
	int icard2[5][2];
	
	for(int i=0;i<5;i++)
	{
		if(card1[i][1] == 'S')
			icard1[i][1] = 1;
		else if(card1[i][1] == 'H')
			icard1[i][1] = 2;
		else if(card1[i][1] == 'C')
			icard1[i][1] = 3;
		else
			icard1[i][1] = 4;
		
		if(card1[i][0] == 'A')
			icard1[i][0] = 1;
		else if(card1[i][0] == 'K')
			icard1[i][0] = 13;
		else if(card1[i][0] == 'Q')
			icard1[i][0] = 12;
		else if(card1[i][0] == 'J')
			icard1[i][0] = 11;
		else if(card1[i][0] == 'T')
			icard1[i][0] = 10;
		else
			icard1[i][0] = card1[i][0]-48;
	}

	for(int i=0;i<5;i++)
	{
		if(card2[i][1] == 'S')
			icard2[i][1] = 1;
		else if(card2[i][1] == 'H')
			icard2[i][1] = 2;
		else if(card2[i][1] == 'C')
			icard2[i][1] = 3;
		else
			icard2[i][1] = 4;
		
		if(card2[i][0] == 'A')
			icard2[i][0] = 1;
		else if(card2[i][0] == 'K')
			icard2[i][0] = 13;
		else if(card2[i][0] == 'Q')
			icard2[i][0] = 12;
		else if(card2[i][0] == 'J')
			icard2[i][0] = 11;
		else if(card2[i][0] == 'T')
			icard2[i][0] = 10;
		else
			icard2[i][0] = card2[i][0]-48;
	}
	
	if(RSF(icard1)==1)
		return 1;
	
	if(RSF(icard2)==1)
		return 0;
	
	if(SF(icard1) > SF(icard2))
		return 1;
	
	if(SF(icard1) < SF(icard2))
		return 0;

	if(FK(icard1) > FK(icard2))
		return 1;
	
	if(FK(icard))
	
}

int main()
{
	ifstream fin("p054_poker.txt");
	string str;

	int count=0;
	
	while(!fin.eof())
	{
		if(fin.eof())
			break;
		
		getline(fin,str,'\n');
		
		if(check(str)==1)
			count++;
	}
	cout<<count;
	fin.close();
}
