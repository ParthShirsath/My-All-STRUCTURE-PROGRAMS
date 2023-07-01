#include<stdio.h>
#include<string.h>
struct emp
{
	int id;
	char ename[20];
	float sal;
}e1[20];
int main()
{
	int i,n,f=0;
	char name[20];
	printf("enter the limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the employee no,name,salary=\n");
		scanf("%d%s%f",&e1[i].id,e1[i].ename,&e1[i].sal);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nemployee Id=%d,name=%s,salary=%f\n",e1[i].id,e1[i].ename,e1[i].sal);
	}
	
	printf("\nEnter The Employee Name To Search=");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
		if(strcmp(e1[i].ename,name)==0)
		{
			f=1;
			printf("\nemployee Id=%d,name=%s,salary=%f\n",e1[i].id,e1[i].ename,e1[i].sal);	
		}
	}
	if(f==0)
	printf("result not found.....!");
}
