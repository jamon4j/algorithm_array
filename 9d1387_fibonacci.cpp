/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:�Ŷ�OJ1387��쳲��������У���Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n��
 *  Method:��������ע��ʹ��long long���� 
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 71
int main()
{
	int n;
	long long a[SIZE] = {0};	//ע����long long����ʾ 
	a[1] = 1;
	
	for(int i=2;i<=70;i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	while(scanf("%d",&n)!=EOF)
	{	
		printf("%lld\n",a[n]);	
	}
} 
