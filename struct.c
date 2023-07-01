#include <stdio.h>
struct student
{
	int rno;
	char sname[20];
	float per;
}s1[100];
int main()
{
	int n,i,ch,f=0;
	printf("Enter The Limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter student Roll number=\n");
		scanf("%d",&s1[i].rno);
		printf("Enter student Name=\n");
		scanf("%s",&s1[i].sname);
		printf("Enter student Percentage=\n");
		scanf("%f",&s1[i].per);
		printf("----------------------------------------------------------------");
	}
	do
	{
		printf("\nMenu:-\n1-Display All \n2-Display Percentage having>60");
		printf("\nENter Your Choice");
		scanf("%d",&ch);
			switch(ch)
			{
				case 1:for(i=0;i<n;i++)
				       	    {
						printf("\n student Roll number=%d",s1[i].rno);
						printf("\n student Name=%s",s1[i].sname);
						printf("\n student Percentage=%f",s1[i].per);
						printf("----------------------------------------------------------------");
					    }
						break;
				case 2:for(i=0;i<n;i++)
						{
							if(s1[i].per>=60)
							{
								f=1;	
								printf("\n student Roll number=%d",s1[i].rno);
								printf("\n student Name=%s",s1[i].sname);
								printf("\n student Percentage=%f",s1[i].per);
								printf("\n----------------------------------------------------------------");
							}	
						}	
						if(f=0)
						printf("\nRecord is not found....");
						break;
				default:printf("\nInvalid choice......!");
			}
	}while(ch<3);
}
