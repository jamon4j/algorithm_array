/*
 *	Author:zjj
 *	Date:2014/11/8 10:20
 *  Desc:九度OJ1387,在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 		 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。 
 *  Method:使用一个大小为1000*1000的hash表来存储数组中的数，存入完毕即可判断
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
