/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:�Ŷ�OJ1387,��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
 		 �����һ������������������һ����ά�����һ���������ж��������Ƿ��и������� 
 *  Method:�漰��ά����Ĳ��ң���ת��Ϊһλ���飬ʹ�ö��ֲ��ң�ǰ���������� 
 */

#include<stdio.h>
#define MAX 1000000

bool searchIn2DArray(int begin,int end,int t,int a[]) {
	int left = begin;
	int right = end;
	while(left<=right) {
		int mid = (left+right)/2;
		if(a[mid]==t) {
			return true;
		}
		else if(a[mid]<t) {
			left = mid + 1;
		} 
		else {
			right = mid - 1;
		}
		
	}
	return false;
} 

int main() {
	int a[MAX];	
	int rows,cols,t;
	while(scanf("%d %d",&rows,&cols)!=EOF){
		scanf("%d",&t);
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				scanf("%d",&a[i*cols+j]);
			}
		}
		
		bool flag = searchIn2DArray(0,cols*rows-1,t,a);
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
