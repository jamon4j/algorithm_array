/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:九度OJ1387,在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 		 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。 
 *  Method:涉及二维数组的查找，可转化为一位数组，使用二分查找（前提整体有序） 
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
