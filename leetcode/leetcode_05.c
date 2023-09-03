#include<stdio.h>
#include<string.h>
//leetcode_5 寻找其中最长的回文子串
int find_Palindrome(char ch[],int left,int right)
{
	int i = left;
	while (left<=right)
	{
		if (ch[left]==ch[right])
		{
			left++;
			right--;
		}
		else
		{
			return -1;
		}
	}
	return i;
}
void longestPalindrome(char ch[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		for (int j = sz-(i+1); j < sz; j++)
		{
			if (find_Palindrome(ch, i, j)>-1)
			{
				for (int n = find_Palindrome(ch, i, j); n <= j; n++)
				{
					printf("%c", ch[n]);
				}
				return;
			}
		}
	}
	
}
int main()
{
	char ch[] = "cbbd";
	int sz = strlen(ch);
	longestPalindrome(ch, sz);
	return 0;
}