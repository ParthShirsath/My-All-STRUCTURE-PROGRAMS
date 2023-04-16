#include<stdio.h>
#include<string.h>
	struct student{
	int rno;
	char name[20];
	float per;
	}s1[100];
int main()
{		
		int i,n,no,max,index;
		printf("Enter Limit=");
	   	scanf("%d",&n);
  	        for(i=0;i<n;i++)
		  {
 		         printf("Enter student roll no,name,percentage=");
	     	         scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
  	          }
  	          max=s1[0].per;
  	          index=0;
  	          for(i=0;i<n;i++)
  	            {
  	              if(max<s1[i].per)
  	             	{
  	             	 max=s1[i].per;
  	              	 index=i;
  	              	}
  	            }
	     	   printf("\n%d\t%s\t%f\t",s1[index].rno,s1[index].name,s1[index].per); 
}
