/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:�Ŷ�OJ1387��쳲��������У���Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n��
 *  Method:�ݹ鷨��ע��ʹ�ü��䷨������������棬�����ظ�������ֳ�ʱ 
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 71

long long Data[71] = {0};//������������� 
long long Fibonacci(int n)
{
	if(n<=1) return n;
	if(Data[n] != 0) return Data[n];
	Data[n] = Fibonacci(n-1)+Fibonacci(n-2);
	return Data[n];
}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{	
		printf("%lld\n",Fibonacci(n));	
	}
} 
