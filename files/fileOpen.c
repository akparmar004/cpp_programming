#include<stdio.h>
void main()
{
	FILE * fptr;
	char ch;
	fptr = fopen("file.txt","w");

	while((ch = getchar()) != EOF)
		fputc(ch,fptr);
	
	fclose(fptr);

	if((fptr = fopen("file.txt","r")) == NULL)
	{
		printf("file doesn't exist!!\n");
	}
	else
	{
		while((ch = fgetc(fptr)) != EOF)
			printf("%c",ch);
	}
	fclose(fptr);
}
