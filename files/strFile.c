#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
}stu1,stu2;

void main()
{
	FILE *fp;
	int i,n;

	printf("enter number of records : ");
	scanf("%d",&n);

	fp = fopen("student.dat","w");

	for(i = 1;i <= n;i++)
	{
		printf("enter rollno and name : ");
		scanf("%d %s",&stu1.rollno,stu1.name);
		fprintf(fp,"%d %s",stu1.rollno,stu1.name);
	}
	fclose(fp);

	fp = fopen("student.dat","r");

	printf("rollno\tname\n");
	while(fscanf(fp,"%d %s",&stu2.rollno,stu2.name) != EOF)
		printf("%d\t%s\n",stu2.rollno,stu2.name);

	fclose(fp);

}
