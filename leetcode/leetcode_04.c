#include<iostream>
#include<stdio.h>
//leetcode 第四题 找出数组中位数

void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
double find_midnum(int num1[],int num2[],int sz1,int sz2)
{
	int* p = new int[sz1 + sz2];

	for (int i = 0; i < sz1 + sz2; i++)
	{
		if (i<sz1)
		{
			p[i] = num1[i];
		}
		else
		{
			p[i] = num2[i - sz1];
		}
	}
	for (int k = 0; k < sz1+sz2-1; k++)
	{
		int min=k;
		for (int n = k+1; n < sz1 + sz2; n++)
		{
			if (p[min]>p[n])
			{
				min = n;
			}
		}
		swap(&p[k], &p[min]);
	}
	if ((sz1+sz2)%2==0)
	{
		int count = (sz1 + sz2) / 2 - 1;
		double t= ((double)p[count] + (double)p[count + 1]) / 2;
		delete[] p;
		return t;
	}
	else
	{
		double t = (double)p[(sz1 + sz2) / 2];
		delete[] p;
		return t;
	}
}

int main()
{
	int num1[] = { 1,3 };
	int num2[] = { 2 };
	int sz1 = sizeof(num1) / sizeof(num1[0]);
	int sz2 = sizeof(num2) / sizeof(num2[0]);
	printf("%lf ",find_midnum(num1, num2, sz1, sz2));
	return 0;
}