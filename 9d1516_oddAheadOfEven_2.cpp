/*
 *	Author:zjj
 *	Date:2014/11/24 8:19
 *  Desc:�Ŷ�OJ1386������һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
    ���е�ż��λ��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣
 *  Method:����ż���ŵ��������ʱ�临�Ӷ�O(n*n)���ύ��ʱ  
 */
 
#include<stdio.h>
#define SIZE 100000

void adaptArray(int a[],int n)
{
	int loc = 0;//loc��λĿǰ���鿴������Ԫ�أ�i�����ڼ��� 
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
�������룺
5
1 2 3 4 5
���������
1 3 5 2 4
*/ 
