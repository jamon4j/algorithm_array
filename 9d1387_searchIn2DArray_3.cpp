/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:�Ŷ�OJ1387,��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
 		 �����һ������������������һ����ά�����һ���������ж��������Ƿ��и������� 
 *  Method:ʹ��һ����СΪ1000*1000��hash�����洢�����е�����������ϼ����ж�
 */

#include<stdio.h>
#define MAX 1000000

int main() {
	int a[MAX];
	int rows,cols,t;
	while(scanf("%d %d",&rows,&cols)!=EOF){
		int hash[MAX] = {0};
		scanf("%d",&t);
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				scanf("%d",&a[i*cols+j]);
				int tmp = a[i*cols+j];
				hash[tmp] = 1;
			}
		}
				
		if(hash[t]==1) {
			printf("Yes\n");	
		} else {
			printf("No\n");	
		}
	}
	
	return 0;
}

/*
3 3
5
1 2 3
4 5 6
7 8 9
3 3
1
2 3 4
5 6 7
8 9 10
3 3
12
2 3 4
5 6 7
8 9 10
*/
