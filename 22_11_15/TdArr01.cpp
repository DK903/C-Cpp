#include <stdio.h>
int main(){
	int arr[3][4] = {1,2,3,4,5,6};// 3 行 4 列 
	//列不能省略！行可以 
	//不完全初始化  默认初始化是零 
	int arr1[3][4] = {{1,2,3},{4,5,},6};
	int arr2[][4] = {{2,3},{4,5}};
	//二维数组的遍历
	int i = 0;
	for(i=0;i<3;i++)
	{
		int j = 0;
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	} 
	printf("******************************************\n");
	//地址遍历 
	int x = 0;
	for(x=0;x<3;x++)
	{
		int y = 0;
		for(y=0;y<4;y++)
		{
			printf("  &arr[%d][%d]: %p\n",x,y,&arr[x][y]);
		}
	}
	//二维数组也是连续存放 
	return 0;
}
