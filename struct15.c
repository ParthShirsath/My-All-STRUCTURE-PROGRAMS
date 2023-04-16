#include<stdio.h>
#include<string.h>
struct employee
{
 int id;
 char name[20];
float sal;
}e1[100];
  int main()
   {
    int i,n,ch;
   char name[20]; 
   printf("enter limit="); 
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {

    printf("emp Id name salary=");
    scanf("%d%s%f",&e1[i].id,e1[i].name,&e1[i].sal);
    }
  do 
  {
    printf("\nMenu:-\n1- search by name 2-display all");
    printf("\nenter choice::"); 
    scanf("%d",&ch); 
      switch(ch)
   {
    case 1:
    printf("\nemp name to search="); 
    scanf("%s",name); 
    for(i=0; i<n; i++) 
    { 
    if(strcmp(e1[i].name,name)==0)

    {
    printf("\n emp id=%d",e1[i].id); 
    printf("\n emp sal=%f",e1[i].sal);
     break;
    }
   }

    if(i==n)
     printf("\nrecord not found");
     break;

   case 2: 
   for (i=0;i<n;i++)

   {
    printf("\n emp id=%d",e1[i].id);
    printf("\n emp name=%s",e1[i].name);
   printf("\n emp salary=%f",e1[i].sal);
    }
    break;
    
   default: printf("\n wrong choice");
 }
} 
while(ch<3);
}
