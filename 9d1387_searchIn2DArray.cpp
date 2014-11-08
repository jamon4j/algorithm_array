/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:九度OJ1387,在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 		 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。 
 *  Method: 从数组右上角开始遍历，小于目标数col--,大于目标数row++ 
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
