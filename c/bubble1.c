#include<stdio.h>
int bubble(int *,int n);
void main()
{
    int i,n,a[10],z;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   z= bubble(a,n);
   printf("%d",z);
    return 0;
}
int bubble(int a[],int n)
{
    int i,j,temp,flag;
     for(i=0;i<n-1;i++)
     {
         flag=0;
         for(j=0;j<n-1-i;j++)
         {
             if(  a[j] > a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
                 flag=1;
             }
         }
         if(flag==0)
            break;
     }
     printf("shorted list");
     for(i=0;i<n;i++)
     printf("%d \t ",a[i ]);
    return 0;
}

