#include<stdio.h>

int sum(int n)
{
	if(n > 0)
		return (n % 10) + sum(n/10);
	else
		return 0;
}
void main()
{
	int num;
	printf("enter number : ");
	scanf("%d",&num);

	int result = sum(num);
	printf("sum of digits of entered number is : %d\n",result);
}
