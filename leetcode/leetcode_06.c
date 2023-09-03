#include<stdio.h>
#include<string.h>
//leetcode_06 N字型变换
int find_cows(int numrows, int sz)
{
	int tmp01 = sz / (numrows * 2 - 2);
	int tmp02 = sz % (numrows * 2 - 2);
	if (tmp02 > numrows)
	{
		tmp02 = tmp02 - numrows + 1;
	}
	else if(tmp02!=0)
	{
		tmp02 = 1;
	}
	return tmp02 + tmp01*3;
}
void convert_N(char ch[],int numrows,int sz)
{
	char arr[100][100] = { 0 };
	int t = numrows - 2;
	int tmp = 0;
	int count = 0;
	int s = 0;
	int numcows = find_cows(numrows, sz);
	for (int i = 0; i < numcows; i++)
	{
		for (int j = 0; j <numrows; j++)
		{
			if (tmp==0&&s<sz)
			{
				arr[j][i] = ch[s]; 
				s++;
			}
			else
			{
				if ((j+i)%(numrows-1)==0 && s < sz)
				{
					arr[j][i] = ch[s];
					s++;
				}
			}
		}
		count++;
		tmp = count % (t+1);
	}
	for (int k = 0; k < numrows; k++)
	{
		for (int n = 0; n < numcows; n++)
		{
			if (arr[k][n] != 0) {
				printf("%c", arr[k][n]);
			}
		}
	}
}

int main()
{
	char ch[] = "PAYPALISHIRING";
	int numrows = 3;
	int sz = strlen(ch);
	convert_N(ch, numrows, sz);


	return 0;
}