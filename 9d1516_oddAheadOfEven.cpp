/*
 *	Author:zjj
 *	Date:2014/11/24 8:19
 *  Desc:�Ŷ�OJ1386������һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
    ���е�ż��λ��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
 *  Method: �����Ǹı�����Ľṹ����ֱ��ͨ�����������ż���������������ķ�ʽAC 
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
�������룺
5
1 2 3 4 5
���������
1 3 5 2 4
*/ 
