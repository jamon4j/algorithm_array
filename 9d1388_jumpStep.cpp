/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:�Ŷ�OJ1389����̬��̨��,һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������
 *  Method:
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 51

int main()
{
	int n;
	long long sum=0;
	long long a[SIZE] = {0};	//ע����long long����ʾ 
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
�������룺
6
���������
32
*/
