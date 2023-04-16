#include<stdio.h>
#include<string.h>
	struct student{
	int rno;
	char name[20];
	float per;
	}s1[100];
int main()
{		
		int i,n,ch;
		printf("Enter Limit=");
	   	scanf("%d",&n);
  	        for(i=0;i<n;i++)
		  {
 		         printf("Enter student roll no,name,percentage=");
	     	         scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
  	          }
  	          do{
  	          printf("\nMenu:-\n1-Display all\n2-Display Record Whose Per>60");
		  printf("\nEnter Your choice=");
		  scanf("%d",&ch);
		  switch(ch)
		  {
  	          case 1:printf("Records=\n");
			  for(i=0;i<n;i++)
	  		    {
	     			printf("\n%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].per);
	  		    }
	  		    break;
	  	  case 2:for(i=0;i<n;i++)
      			{
		          if(s1[i].per>60)
          		   {
	  	              printf("\n%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].per);
	  	              break;
	  		   }
      			}
	  	    if(i==n)
	  	    printf("\nRecord Not Found.....!");
	  	    break;
	  	    default:printf("Invalid choice........!");
	  	  }
	   }while(ch<3);
}
