#include <stdio.h>
#include <string.h>
struct car
{
	int cno;
	char model[20],colour[20];
	float cost;
}c1[100];
int n;
int main()
{
	void search(char car_name[20]);
	void disp();
	int i,ch;
	char car_name[20];
	printf("Enter The Limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Car number=\n");
		scanf("%d",&c1[i].cno);
		printf("\nEnter Car Name=\n");
		scanf("%s",&c1[i].model);
		printf("\nEnter Car Colour=\n");
		scanf("%s",&c1[i].colour);
		printf("\nEnter Car Cost=\n");
		scanf("%f",&c1[i].cost);
		printf("\n----------------------------------------------------------------");
	}
	do{
		printf("Menu:-\n1-Search by name\n2-Display Car all details");
		printf("Enter Your Choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter Car Name");
				     scanf("%s",&car_name);
				     search(car_name);
				     break;
			case 2:disp();
				     break;
			default:printf("Invalid Choice....!");
		}
	}while(ch<3);
}
void search(char car_name[20])
{
         int f=0,i;
	for(i=0;i<n;i++)
	{
		if(strcmp(c1[i].model,car_name)==0)
		{
		f=1;
		printf("\nCar number=%d",c1[i].cno);
		printf("\nCar Name=%s",c1[i].model);
		printf("\nCar colour=%s",c1[i].colour);
		printf("\nCar Cost=%f",c1[i].cost);
		printf("\n----------------------------------------------------------------");
		}
	}
	if(f==0)
	printf("Result is not found");
}
void disp()
{
int i;
	for(i=0;i<n;i++)
	{
		printf("\nCar number=%d",c1[i].cno);
		printf("\nCar Name=%s",c1[i].model);
		printf("\nCar colour=%s",c1[i].colour);
		printf("\nCar Cost=%f",c1[i].cost);
		printf("\n----------------------------------------------------------------");
	}
}
