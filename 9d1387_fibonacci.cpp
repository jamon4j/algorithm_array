/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:九度OJ1387：斐波那契数列，大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项
 *  Method:迭代法，注意使用long long类型 
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 71
int main()
{
	int n;
	long long a[SIZE] = {0};	//注意用long long来表示 
	a[1] = 1;
	
	for(int i=2;i<=70;i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	while(scanf("%d",&n)!=EOF)
	{	
		printf("%lld\n",a[n]);	
	}
} 
