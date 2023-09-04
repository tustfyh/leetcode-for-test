#include<stdio.h>
#include<iostream>
//leetcode_07 整数反转
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
int reverse(int x)
{   
	int y = x;
	int tmp01 = 0;
	while (1)
	{
		if (y > 10|| y<-10)
		{
			y = y / 10;
			tmp01++;
		}
		else
		{
			break;
		}
	}
	int* arr = new int[tmp01 + 1];
	int count = 0;
	int tmp = 0;
	int num = 0;
	while (1)
	{
		if (x>10|| x<-10)
		{
			arr[count] = x % 10;
			x = x / 10;
			count++;
		}
		else
		{
			arr[count] = x;
			break;
		}
	}
	num = count;
	for ( int i = 0; i <=count; i++)
	{
		tmp = tmp + arr[i] * ten_for(num);
		num--;
	}
	delete[] arr;
	return tmp;
}
int main()
{
	int x = -123;
	printf("%d ",reverse(x));
	return 0;
}