#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}e1[20];
int main()
{
	int i,n,f=0;
	printf("enter the limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the employee no,name,salary=\n");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	
	for(i=0;i<n;i++)
	{
		if(e1[i].sal>=10000)
		{
			f=1;
			printf("\nemployee no=%d,name=%s,salary=%f\n",e1[i].eno,e1[i].ename,e1[i].sal);	
		}
	}
	if(f==0)
	printf("result not found.....!");
}
