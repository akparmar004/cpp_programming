#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;
	p = (int *)malloc(sizeof(int) * 5);
	if(p == NULL)
	{
		printf("memory not allocated..\n");
		exit(1);
	}
	printf("enter 5 number : ");
	for(int i = 0;i < 10;i++)
	{
		scanf("%d",p+i);
	}
	
	for(int i = 0;i < 10;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
