#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float sal;
}e1[100];
int main()
{
	int i,n,max,index=0;
	printf("Enter Limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Employee No=");
		scanf("%d",&e1[i].eno);
		printf("Enter Employee Name=");
		scanf("%s",e1[i].ename);
		printf("Enter Employee Salary=");
		scanf("%f",&e1[i].sal);
	}
	max=e1[0].sal;
	for(i=0;i<n;i++)
	{
		if(e1[i].sal>max)
		{
		max=e1[i].sal
		index=i;
		}
	}
		printf("Employee No=%d",e1[index].eno);
		printf("Employee Name=%s",e1[index].ename);
		printf("Employee Salary=%f",e1[index].sal);
}
