/*
 *	Author:zjj
 *	Date:2014/11/16 16:43
 *  Desc:�Ŷ�OJ1386����ת�������С���֣���һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
 	����һ����������������һ����ת�������ת�������СԪ�ء�
 	��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
 *  Method: ������ת��������ʹ�����ƶ��ַ���ͨ���Ƚ��м�Ԫ�غ͵�һ��Ԫ�صĴ�С��ϵ���ж��м�Ԫ��������һ�����У�
 	Ȼ����С��Χ��ֱ��start+1 == end ��mid = end�������Ϊ�±�ΪmidԪ�أ�����Ҫע�⿼�������������0,1,1,1,1��תΪ1,0,1,1,1��������
	���������ʹ��˳����ҷ� 
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
		/*���ҽ�������*/ 
		if(start+1 == end)
		{
			mid = end;
			break;
		}
		
		mid = (start+end)/2;
		
		/*�����������*/
		if(arr[start]==arr[mid]&&arr[end]==arr[mid])
		{
			/*˳�����*/ 
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
�������룺
5
3 4 5 1 2
���������
1
*/
