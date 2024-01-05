#include<stdio.h>
int main()
{
	int matrix[3][3];
	int i,j,rowsum;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<3;i++){
		rowsum=0;
		for(j=0;j<3;j++){
			rowsum=0;
			for(j=0;j<3;j++){
				rowsum+= matrix[i][j];
			}
			printf("sum of row%d=%d\n",i,rowsum);		}
	}
	return 0;
}
