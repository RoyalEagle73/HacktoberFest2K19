#include<stdio.h>
int gcd(int x,int y);
int lcm(int x,int y);
int main()
{
    int x,y,l,g;
    printf("\nEnter the two numbers: ");
    scanf("%d%d",&x,&y);
    g=gcd(x,y);
    l=lcm(x,y);
    printf("\nThe GCD of the numbers is: %d",g);
    printf("\nThe LCM of the numbers is: %d",l);
    return 0;
}
int gcd(int x,int y)
{
    if(x==0)
        return y;
    else
        return(gcd(y%x,x));
}
int lcm(int x,int y)
{
    return((x*y)/gcd(x,y));
}
