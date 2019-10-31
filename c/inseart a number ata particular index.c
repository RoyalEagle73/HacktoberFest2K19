#include<stdio.h>
int ins(int *);
int main()
{
    int i ,a[10];
    printf("enter the array element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    n=ins(a);
    printf("%d",n);
    return 0;
}
int ins(int a[])
{
    int i,b,index;
    printf("enter the number whose you want add in array");
    scanf("%d",&b);
    printf("enter the index ");
    scanf("%d",&index);
    for(i=10-2;i>=index;i--)
        a[i+1]=a[i];
         a[i+1]=b;
          for(i=0;i<10;i++)
            printf("%d\t",a[i]);
}
