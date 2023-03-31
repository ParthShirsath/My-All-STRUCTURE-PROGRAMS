#include <stdio.h>
#include <string.h>
struct student
{
	int rno;
	char sname[20],sclass[20];
	float per;
}s1[100],t;
int main()
{
	int n,i,f=0,j;

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
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(s1[i].sclass,s1[j].sclass)<0)
			{
			t=s1[i];
			s1[i]=s1[j];
			s1[j]=t;
			}			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nStudent Roll number=%d",s1[i].rno);
		printf("\nStudent Name=%s",s1[i].sname);
		printf("\nStudent Class=%s",s1[i].sclass);
		printf("\nStudent Percentage=%f",s1[i].per);
		printf("\n----------------------------------------------------------------");
	}
}
