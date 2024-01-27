#include<stdio.h>
struct stud
{
	char name[20];
	int roll;
	float marks;
};
void main()
{	
	struct stud st1 = {"arjun", 10, 99};
	struct stud st2 = {"kishan", 11, 30};
	printf("%s %d %.2f\n",st1.name,st1.roll,st1.marks);
}
