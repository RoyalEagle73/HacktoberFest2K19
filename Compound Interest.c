#include<stdio.h>
#include<math.h>

int main()
{
    float principal,rate,time,ci;

    printf("Enter the principal (amount):");
    scanf("%f", &principal);
    printf("Enter time:");
    scanf("%f", &time);
    printf("Enter rate:");
    scanf("%f", &rate);
    ci = principal *(pow((1 + rate /100), time));
    printf("Compound interest = %f", ci - principal) ;
    return 0;
}
