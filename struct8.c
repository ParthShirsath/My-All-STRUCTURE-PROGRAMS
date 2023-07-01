#include<stdio.h>
struct item
{
	int code;
	char name[20];
	float price;
}i1[20];
int main()
{
	int i,n,f=0;
	printf("enter the limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the Item no,Name,Price=\n");
		scanf("%d%s%f",&i1[i].code,&i1[i].name,&i1[i].price);
	}
	
	for(i=0;i<n;i++)
	{
			printf("\nItem code=%d,Item name=%s,Price=%f\n",i1[i].code,i1[i].name,i1[i].price);	
	}
}
