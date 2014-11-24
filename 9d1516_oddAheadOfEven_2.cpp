/*
 *	Author:zjj
 *	Date:2014/11/24 8:19
 *  Desc:九度OJ1386：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
    所有的偶数位于位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
 *  Method:遇到偶数放到数组最后，时间复杂度O(n*n)，提交超时  
 */
 
#include<stdio.h>
#define SIZE 100000

void adaptArray(int a[],int n)
{
	int loc = 0;//loc定位目前所查看的数组元素，i仅用于计数 
	int i=0; 
	while(i<n)
	{
		if(a[loc]&1) 
		{
			loc++;			
		}
		else
		{
			int temp = a[loc];
			for(int j=loc;j<n-1;j++)
			{
				a[j] = a[j+1];
			}
			a[n-1] = temp;
		}
		i++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(i==n-1) printf("%d\n",a[i]);
		else printf("%d ",a[i]);
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
