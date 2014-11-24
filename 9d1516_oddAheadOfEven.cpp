/*
 *	Author:zjj
 *	Date:2014/11/24 8:19
 *  Desc:九度OJ1386：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
    所有的偶数位于位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
 *  Method: 不考虑改变数组的结构，而直接通过输出奇数，偶数放入数组后输出的方式AC 
 */
 
#include<stdio.h>
#define SIZE 100000

void adaptArray(int a[],int n)
{
	int even[SIZE];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if((a[i]&1)==0) even[j++] = a[i];
		else 
		{
			if(i==n-1&&j==0) printf("%d\n",a[i]);	
			else printf("%d ",a[i]);
		}			
	}
	if(j!=0) 
	{
		for(int i=0;i<j;i++)
		{
			if(i==j-1) printf("%d\n",even[i]);	
			else printf("%d ",even[i]);
		}		
	}
}

int main()
{
	int n;
	int a[SIZE];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		adaptArray(a,n);
	}
}
/*
样例输入：
5
1 2 3 4 5
样例输出：
1 3 5 2 4
*/ 
