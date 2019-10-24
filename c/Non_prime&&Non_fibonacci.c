#include<stdio.h>
#include<math.h>
int isprime(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
    {
        if(!(x%i))
        {
            return 1;
        }
    }
    return 0;
}
void nonprime(int x,int y)
{
    int i;
    for(i=x;i<=y;i++)
    {
        if(isprime(i))
            printf(" %d",i);
    }
}
void nonfibonacci(int x,int y)
{
    int i=0,j=1,k=0,l;
    while(k<=y)
    {
        k=i+j; l=i+1;
        while(l>=x && l<j)
        {
            printf(" %d",l++);
        }
        i=j; j=k;
    }
}
int main()
{
    int a,b,ch;
    do {
    printf("\n1.Non Prime Series\n2.Non Fibonacci Series\n3.Exit\n");
    scanf("%d",&ch);
    printf("\nEnter A Range:");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case 1:nonprime(a,b);
                break;
        case 2:nonfibonacci(a,b);
                break;
        case 3:return;
    }
    }while(1);
}
