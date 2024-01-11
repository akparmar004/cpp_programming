#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **p,i,j,rows=3,cols=3;
	
	p = (int **)malloc(rows * sizeof(int));
	
	for(i = 0;i < rows; i++)
		p[i] = (int *)malloc(cols * sizeof(int));
	
	for(i = 0;i < rows;i++)
		for(j = 0;j < cols;j++)
		{
			printf("enter p[%d][%d] : ",i,j);
			scanf("%d",&p[i][j]);
		}
		
	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < cols;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0;i < rows;i++)
		free(p[i]);
		
	free(p);
}
