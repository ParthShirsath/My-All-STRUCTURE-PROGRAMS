#include<stdio.h>
struct student
{
	int rno;
	char name[20];
}s1;
int main()
{
	void disp();
	printf("\nenter the Student Roll no,Name=\n");
	scanf("%d%s",&s1.rno,s1.name);
	disp();
}
void disp()
{
		printf("\nStudent Roll no=%d,Name=%s\n",s1.rno,s1.name);
}

