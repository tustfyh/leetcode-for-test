#include<stdio.h>
#include<string.h>
int find(char ch[], int i,int j)
{

	for (int k = i; k < j; k++)
	{
		if (ch[k] == ch[j])
		{
			return 1;
		}
	}
	return 0;
}
int lengthOfLongestSubstring(char ch[],int sz)
{
	int k = 0;
	int count = 0;
	for (int i = 0; i < sz; i++)
	{
		int j;
		for (j = i + 1; j < sz; j++)
		{
			if (find(ch, i, j))
			{
				count++;
				break;
			}
			count++;
		}
		if (k < count)
		{
			k = count;
		}
		count = 0;
	}
	return k;
}
int main()
{
	char ch[] = "abcabcbb";
	int sz = strlen(ch);
	printf("%d ",lengthOfLongestSubstring(ch, sz));



	return 0;
}