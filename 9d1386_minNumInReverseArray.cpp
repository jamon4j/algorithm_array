/*
 *	Author:zjj
 *	Date:2014/11/16 16:43
 *  Desc:九度OJ1386：旋转数组的最小数字，把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
 	输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。
 	例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
 *  Method: 利用旋转数组性质使用类似二分法，通过比较中间元素和第一个元素的大小关系来判断中间元素属于哪一个序列，
 	然后缩小范围，直到start+1 == end 令mid = end，结果即为下标为mid元素；不过要注意考虑特殊情况例如0,1,1,1,1旋转为1,0,1,1,1后的情况，
	特殊情况就使用顺序查找法 
 */
 
#include<stdio.h>
#include<stdlib.h>

int searchMin(int *arr,int n)
{
	int start = 0;
	int end = n-1;
	int mid = start;
	int min;
	while(arr[end]<=arr[start])
	{
		/*查找结束条件*/ 
		if(start+1 == end)
		{
			mid = end;
			break;
		}
		
		mid = (start+end)/2;
		
		/*处理特殊情况*/
		if(arr[start]==arr[mid]&&arr[end]==arr[mid])
		{
			/*顺序查找*/ 
			for(int i=start+1,min=arr[start];i<=end;i++)
			{
				if(arr[i]<min) 
				{
					mid = i;
					min = arr[i];
				}
			}
			break;
		} 
		
		if(arr[mid]<=arr[start])
		{
			end = mid;
		}
		else
		{
			start = mid;
		}
	}
	return arr[mid];
}

int main()
{
	int n;
	int *arr;
	while(scanf("%d",&n)!=EOF)
	{
		arr = new int[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		int res = searchMin(arr,n);
		printf("%d\n",res);
		delete[] arr;
	}
	return 0;
}
/*
样例输入：
5
3 4 5 1 2
样例输出：
1
*/
