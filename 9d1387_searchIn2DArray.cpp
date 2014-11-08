/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:�Ŷ�OJ1387,��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
 		 �����һ������������������һ����ά�����һ���������ж��������Ƿ��и������� 
 *  Method: ���������Ͻǿ�ʼ������С��Ŀ����col--,����Ŀ����row++ 
 */

#include<stdio.h>
#define MAX 1000

bool searchIn2DArray(int rows,int cols,int t,int a[][MAX]) {
	int row = 0;
	int col = cols-1;
	while(row<rows&&col>=0) {
		if(a[row][col] == t) return true;
		else if(a[row][col]<t) row++;
		else col--;
	}
	return false;
} 

int main() {
	int a[MAX][MAX];
	int rows,cols,t;
	while(scanf("%d %d",&rows,&cols)!=EOF){
		scanf("%d",&t);
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				scanf("%d",&a[i][j]);
			}
		}
		
		bool flag = searchIn2DArray(rows,cols,t,a);
		if(flag) {
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
