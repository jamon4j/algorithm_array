/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:�Ŷ�OJ1390�����θ���,���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
 	������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
 *  Method:
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 71

int main()
{
	int n;
	long long sum=0;
	long long a[SIZE] = {0};	//ע����long long����ʾ 
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
�������룺
4
���������
5
*/
