#include<stdio.h>
int rev(int n,int sum)
{
	if(n > 0)
	{
		sum = (sum*10)+(n%10);
		return rev(n/10,sum);
	}
	else
		return sum;
}
void main()
{
	int n;
	printf("enter number : ");
	scanf("%d",&n);

	int res = rev(n,0);
	printf("reverse of entered number is : %d\n",res);
}
