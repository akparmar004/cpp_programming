#include<stdio.h>
void main()
{
	char a[] = "arjun";
	
	for(int i = 0;a[i];i++)
	{
		printf("%c\t",a[i]);
		printf("address of %c is : %u\n",a[i],&a[i]);
	}
}
