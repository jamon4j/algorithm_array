/*
 *	Author:zjj
 *	Date:2014/11/16 18:47 
 *  Desc:九度OJ1387：斐波那契数列，大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项
 *  Method:递归法求，注意使用记忆法将已求过数保存，避免重复运算出现超时 
 */
 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 71

long long Data[71] = {0};//保存已求出的数 
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
