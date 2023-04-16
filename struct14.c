#include<stdio.h>
#include<string.h>
struct emp{
int eno;
char name[20];
float sal;
}e1[100];
int main()
{
	void disp(struct emp e1[100],int n);
	int i,n;
	printf("Enter Limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  printf("Enter Emp no,name,salary=");
	  scanf("%d%s%f",&e1[i].eno,e1[i].name,&e1[i].sal);
	}
	disp(e1,n);
}
void disp(struct emp e1[100],int n)
  {
    int i;
    for(i=0;i<n;i++)
      {
        if(e1[i].sal>10000)
          {
	    printf("\n%d\t%s\t%f\t",e1[i].eno,e1[i].name,e1[i].sal);
	  }
      }
  }
