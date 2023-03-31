#include <stdio.h>
#include <string.h>
struct student
{
	int rno;
	char sname[20],sclass[20];
	per float;
}s1[100];
int main()
{
	int n,i,f=0;
	char cs[20];
	printf("Enter The Limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter student Roll number=\n");
		scanf("%d",&s1[i].rno);
		printf("Enter student Name=\n");
		scanf("%s",&s1[i].sname);
		printf("Enter student Class=\n");
		scanf("%s",&s1[i].sclass);
		printf("Enter student Percentage=\n");
		scanf("%f",&s1[i].per);
		printf("----------------------------------------------------------------");
	}
	printf("Enter Student Class to Display Record Of That Class");
	scanf("%s",&cs);
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i].sclass,cs)==0)
		{
		f=1;
		printf("Enter student Roll number=%d",s1[i].rno);
		printf("Enter student Name=%s",s1[i].sname);
		printf("Enter student Class=%s",s1[i].sclass);
		printf("Enter student Percentage=%f",s1[i].per);
		printf("----------------------------------------------------------------");
		}	
	}
	if(f=0)
	printf("Record is not found....");
}
