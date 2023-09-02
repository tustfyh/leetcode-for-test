#include<stdio.h>
//leetcode 1.两数相加
void num_add(int num[], int sz, int target)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (target - num[i] == num[j])
			{
				printf("%d %d", i, j);
				return;
			}
		}
	}
}


int main()
{
	int num[] = { 2,6,4,1,5 };
	int target = 10;
	int sz = sizeof(num) / sizeof(num[0]);
	num_add(num, sz, target);
	return 0;
}