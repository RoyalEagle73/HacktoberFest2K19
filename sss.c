#include<stdio.h>
#include<math.h>
int main()
{
    int choice,length,breath;
    printf("1. Calculate area of rectangle\n");
    printf("2. Calculate perimeter of rectangle\n");
    printf("3. Calculate diagonal of rectangle\n");
    printf("Please enter your choice\n\n");
    scanf("%d",&choice);
    printf("Please enter length of rectangle\n");
    scanf("%d",&length);
    printf("Please enter breath of rectangle\n");
    scanf("%d",&breath);
    switch(choice)
    {
    case 1:
        printf("Area of rectangle= %d\n", length*breath);
        break;
    case 2:
        printf("Perimeter of rectangle=%d\n", 2*(length*breath));
        break;
    case 3:
        printf("Diagonal of rectangle= %d\n", sqrt(length*length+breath*breath));
        break;
    default:
        printf("Invalid");
    }
    return 0;
}

