#include<stdio.h>
#include<string.h>
struct emp
{
int eno;
char ename[20];
float sal;
}e1[100];
int main()
{
	char name[20];
	int i,n,f=0;
	printf("Enter the limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Employee number,name,salary=\n");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	printf("Enter name to search the record=");
	scanf("%s",name);
	for(i=0;i<n;i++)
	{
			if(strcmp(e1[i].ename,name)==0)
			{
				f=1;
				break;
			}
	}
	if(f==1)
		printf("Result is found...");
	else
		printf("Result is not found...");	
}

