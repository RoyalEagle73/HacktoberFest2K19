#include<stdio.h>
int main()
{
    int n,i,a,b,f=0;
    printf("enter the n bricks");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        a=i;
       if(n>a)
        {
            n-=a;
        }
        else
        {
            a=n;
            break;
        }
        b=2*a;
        if(n>b)
        {
            n-=b;

        }
        else
        {
            b=n;
            f=1;
            //break;
        }
    }
    if(f==1)
        printf("motu");
    else
        printf("patlu");




}
