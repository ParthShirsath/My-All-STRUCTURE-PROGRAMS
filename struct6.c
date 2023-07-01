#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float sal;
}e1[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the employee no,name,salary=\n");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	for(i=0;i<5;i++)
	printf("\nEmployee no=%d,name=%s,salary=%f\n",e1[i].eno,e1[i].ename,e1[i].sal);	
}
