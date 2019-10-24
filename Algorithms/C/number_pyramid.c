//Q1//
//Max Value of an unsigned int using 1's Complement operator//

#include<stdio.h>
void main()
{
    int i,j,k,a,b,c,p;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=9-i;j++)
        {
            printf("*");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
            printf("*");
        }
        for(a=1;a<=8-i;a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
