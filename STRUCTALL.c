#include<stdio.h>
#include<string.h>
struct Emp{
int eno;
char name[20];
float sal;
}e1[100],t;
int main()
{
	int i,n,ch,n1,max,index,k,j;
	char nm[20];
	do{
	printf("\n Menu=");
	printf("\n1-Accept Details");
	printf("\n2-Display Details");
	printf("\n3-Search By Name");
	printf("\n4-Search By Eno");
	printf("\n5-Maximum salary employee");
	printf("\n6-Employee Details In Ascending Order");
	printf("\n7-Records In Percentage order");
	printf("\nEnter Your Choice=");
	scanf("%d",&ch);
	switch(ch)
	  {
	     case 1:printf("Enter Limit=");
	     		 scanf("%d",&n);
			     for(i=0;i<n;i++)
	     		       {
			         printf("Enter Emp no,name,salary=");
	     		         scanf("%d%s%f",&e1[i].eno,e1[i].name,&e1[i].sal);
	  		       }
	  		  break;
	    case 2:printf("Records=\n");
			  for(i=0;i<n;i++)
	  		    {
	     			printf("\n%d\t%s\t%f\t",e1[i].eno,e1[i].name,e1[i].sal);
	  		    }
	  		    break;
	    case 3:printf("\n Enter Name To Search Record=");
	    		scanf("%s",nm);
	    		  for(i=0;i<n;i++)
	  		    {
				if(strcmp(e1[i].name,nm)==0)
	     			{
	     			printf("\n%d\t%s\t%f\t",e1[i].eno,e1[i].name,e1[i].sal);
	  		        break;
	  		        }
	  		    }
	  		    if(i==n)
	  		    printf("Result Not Found......!");
	  		    break;

	    case 4:printf("\n Enter Emp number Search Record=");
	    		scanf("%d",&n1);
	    		  for(i=0;i<n;i++)
	  		    {
				if(e1[i].eno==n1)
	     			{
	     			printf("\n%d\t%s\t%f\t",e1[i].eno,e1[i].name,e1[i].sal);
	  		        break;
	  		        }
	  		    }
	  		    if(i==n)
	  		    printf("Result Not Found......!");
	  		    break;
	  	case 5:max=e1[0].sal;
	  	    	    index=0;
	  		    for(i=0;i<n;i++)
	  		      {
	  		         if(max<e1[i].sal)
	  		    	    {
	  		    	         max=e1[i].sal;
	  		    	         index=i;
	  		    	    }
	  		      }
	     	 	   printf("\n%d\t%s\t%f\t",e1[index].eno,e1[index].name,e1[index].sal); 
	     	 	   break;
	     	case 6:for(i=0;i<n;i++)
	  		      {
	  		         for(j=0;j<i;j++)
	  		           {
	  		              k=strcmp(e1[i].name,e1[j].name);
	  		              if(k<0)
	  		                 {
	  		                    t=e1[i];
	  		                    e1[i]=e1[j];
	  		                    e1[j]=t;
	  		                 }
	  		            }
	  		       }
			      printf("Records In Asending order=\n");
			      for(i=0;i<n;i++)
	  		      {
	     			  printf("\n%d\t%s\t%f\t",e1[i].eno,e1[i].name,e1[i].sal);
	  		      }
	  		      break;
	     	case 7:for(i=0;i<n;i++)
	  		      {
	  		         for(j=0;j<i;j++)
	  		           {
	  		              if(e1[i].sal>e1[j].sal)
	  		                 {
	  		                    t=e1[i];
	  		                    e1[i]=e1[j];
	  		                    e1[j]=t;
	  		                 }
	  		            }
	  		       }
			      printf("Records In Percentage order=\n");
			      for(i=0;i<n;i++)
	  		      {
	     			  printf("\n%d\t%s\t%f\t",e1[i].eno,e1[i].name,e1[i].sal);
	  		      }
	  		      break;	  		       
	     default : printf("Invalid choice.....!");
	  }
}while(ch<8);
}
