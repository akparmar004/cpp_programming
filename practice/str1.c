#include<stdio.h>
void main()
{
	char a[] = "arjun";
	char s[20];
	for(int i = 0;a[i];i++)
	{
		printf("%c\t",a[i]);
		printf("address of %c is : %u\n",a[i],&a[i]);
	}
	
	printf("enter name : ");
	scanf("%s",s);
	printf("%s ",s);
	printf("%s\n","arjun");
}
