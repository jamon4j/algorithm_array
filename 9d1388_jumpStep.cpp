/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:九度OJ1389：变态跳台阶,一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
 *  Method:
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 51

int main()
{
	int n;
	long long sum=0;
	long long a[SIZE] = {0};	//注意用long long来表示 
	a[1] = 1;
	a[2] = 2;
	sum = a[1] + a[2];
	for(int i=3;i<=50;i++)
	{
		a[i] = sum + 1;
		sum += a[i];
	}
	while(scanf("%d",&n)!=EOF)
	{	
		printf("%lld\n",a[n]);	
	}
} 
/*
样例输入：
6
样例输出：
32
*/
