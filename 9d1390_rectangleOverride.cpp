/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:九度OJ1390：矩形覆盖,我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
 	请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
 *  Method:
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 71

int main()
{
	int n;
	long long sum=0;
	long long a[SIZE] = {0};	//注意用long long来表示 
	a[1] = 1;
	a[2] = 2;
	for(int i=3;i<=70;i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	while(scanf("%d",&n)!=EOF)
	{	
		printf("%lld\n",a[n]);	
	}
} 
/*
样例输入：
4
样例输出：
5
*/
