#include<stdio.h>
int armstrong(int n,int temp)
{
	if(n > 0)
	{
		temp = temp + ((n%10) * (n%10) * (n%10));
		return armstrong(n/10,temp);
	}
	else
		return temp;
}
void main()
{
	int n;
	
	printf("enter number : ");
	scanf("%d",&n);

	int res = armstrong(n,0);
	if(n == res)
		printf("yes it is..\n");
	else
		printf("no it's not..\n");
}
