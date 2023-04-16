#include<stdio.h>
#include<string.h>
	struct student{
	int rno;
	char name[20];
	float per;
	}s1[100];
int main()
{		
		int i,n;
		char nm[20];
		printf("Enter Limit=");
	   	scanf("%d",&n);
  	        for(i=0;i<n;i++)
		  {
 		         printf("Enter student roll no,name,percentage=");
	     	         scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
  	          }
  	          printf("Records=\n");
			  for(i=0;i<n;i++)
	  		    {
	     			printf("\n%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].per);
	  		    }
	  	 printf("Enter name to search Record=");
	  	 scanf("%s",nm);
	  	 for(i=0;i<n;i++)
	  	    {
	  	        if(strcmp(s1[i].name,nm)==0)
	  	           {
	  	              printf("\n%d\t%s\t%f\t",s1[i].rno,s1[i].name,s1[i].per);
	  	              break;
	  	           }
		    }
	  	    if(i==n)
	  	    printf("Record Not Found.....!");
}   
