#include<stdio.h>
//leetcode_02 两数相加
void func_add(int arr1[], int arr2[], int sz1, int sz2)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int tmp=0;
	int arr3[100] = { 0 };
	if (sz1>sz2)
	{
		while (1)
		{
			if (i < sz1 && j < sz2)
			{
				arr3[n] = (arr1[i] + arr2[j] + tmp) % 10;
				tmp = (arr1[i] + arr2[j] + tmp) / 10;
			}
			else if (i < sz1 && j>= sz2)
			{
				arr3[n] = (arr1[i] + tmp) % 10;
				tmp = (arr1[i] + tmp) / 10;
			}
			else
			{
				arr3[n] = tmp;
				if (tmp==0)
				{
					for (int k = 0; k <n; k++)
					{
						printf("%d ", arr3[k]);
					}
				}
				else
				{
					for (int k = 0; k <= n; k++)
					{
						printf("%d ", arr3[k]);
					}
				}
				return;
			}
			i++;
			j++;
			n++;
			
		}
	}
	else
	{
		while (1)
		{
			if (i < sz1 && j < sz2)
			{
				arr3[n] = (arr1[i] + arr2[j] + tmp) % 10;
				tmp = (arr1[i] + arr2[j] + tmp) / 10;
			}
			else if (j < sz2 && i >= sz1)
			{
				arr3[n] = (arr2[j] + tmp) % 10;
				tmp = (arr2[i] + tmp) / 10;
			}
			else
			{
				arr3[n] = tmp;
				if (tmp == 0)
				{
					for (int k = 0; k < n; k++)
					{
						printf("%d ", arr3[k]);
					}
				}
				else
				{
					for (int k = 0; k <= n; k++)
					{
						printf("%d ", arr3[k]);
					}
				}
				return;
			}
			i++;
			j++;
			n++;

		}
	}
	

}
int main()
{
	int arr1[] = { 2,4,3,5};
	int arr2[] = { 5,6,4,7,8};
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	func_add(arr1, arr2, sz1, sz2);


	return 0;
}