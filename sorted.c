#include<stdio.h>
int main()
{
    int n1,n2,t,i,j,top,bottom,mid;
    printf("Enter Limit For First Array And Second Array=\n");
    scanf("%d%d",&n1,&n2);
    int a1[n1];
    printf("Enter N number In First Array=");
    for(int i=0;i<n1;i++)
    scanf("%d",&a1[i]);
    int a2[n2];
    printf("Enter N number In First Array=");
    for(int i=0;i<n2;i++)
    scanf("%d",&a2[i]);
    for(int i=0;i<n1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a1[i]<a1[j])
            {
                t=a1[i];
               a1[i]=a1[j];
               a1[j]=t;
            }
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a2[i]<a2[j])
            {
                t=a2[i];
                a2[i]=a2[j];
                a2[j]=t;
            }
        }
    }
    printf("1st Sorted Array=\n");
    for(i=0;i<n1;i++)
    printf("%d  ",a1[i]);

    printf("2nd Sorted Array=\n");
    for(i=0;i<n2;i++)
    printf("%d  ",a2[i]);
    top=0;
    bottom=n1-1;
    mid=(top+bottom)/2;
    printf("\nMedian Of First Array=%d",a1[mid]);

    top=0;
    bottom=n2-1;
    mid=(top+bottom)/2;
    printf("\nMedian Of Secod Array=%d",a2[mid]);
}