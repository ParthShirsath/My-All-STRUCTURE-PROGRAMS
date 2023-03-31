#include <stdio.h>
#include <string.h>
struct student
{
	int rno;
	char sname[20],sclass[20];
	float per;
}s1[100];
int main()
{
	int n,i,f=0;
	char cs[20];
	printf("Enter The Limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter student Roll number=\n");
		scanf("%d",&s1[i].rno);
		printf("\nEnter student Name=\n");
		scanf("%s",&s1[i].sname);
		printf("\nEnter student Class=\n");
		scanf("%s",&s1[i].sclass);
		printf("\nEnter student Percentage=\n");
		scanf("%f",&s1[i].per);
		printf("\n----------------------------------------------------------------");
	}
	printf("Enter Student Class to Display Record Of That Class");
	scanf("%s",&cs);
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i].sclass,cs)==0)
		{
		f=1;
		printf("\nStudent Roll number=%d",s1[i].rno);
		printf("\nStudent Name=%s",s1[i].sname);
		printf("\nStudent Class=%s",s1[i].sclass);
		printf("\nStudent Percentage=%f",s1[i].per);
		printf("\n----------------------------------------------------------------");
		}	
	}
	if(f=0)
	printf("Record is not found....");
}
