#include<stdio.h>
#include<string.h>
//leetcode_08 字符串转换整数
int ten_for(int num)
{
	int tmp = 1;
	if (num)
	{
		for (int i = 0; i < num; i++)
		{
			tmp = tmp * 10;
		}
	}
	return tmp;
}
int myAtoi(char s[],int sz)
{
	int flag = 0;
	int i;
	char tmp[10] = { '0'};
	for (i = 0; i < sz; i++)
	{
		if (s[i]==' ' && flag==0)
		{

		}
		 if(s[i]!=' ')
		 {
			if (s[i]=='-')
			{
				flag = 1;
				i = i + 1;
			}
			else
			{
				flag = 2;
			}

			break;
		}
	}
	int count01= 0;

	for (int j = i; j < sz; j++)
	{
		if (s[j] >= '0' && s[i]< '10')
		{
			tmp[count01] = s[j];
			count01++;
		}
		else
		{
			break;
		}
	}
	int count02 = count01;
	int num = 0;
	for (int k = 0; k < count01; k++)
	{
		num = num + (int)(tmp[k]-'0') * ten_for(count02-1);
		count02--;
	}
	if (flag==1)
	{
		return num * -1;
	}
	else
	{
		return num;
	}
}
int main()
{
	char s[] = "42";
	int sz = strlen(s);
	printf("%d ",myAtoi(s, sz));
	return 0;
}