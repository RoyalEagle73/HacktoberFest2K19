#include<stdio.h>
//#include<conio.h>
void main()
{
    int num,i=1;
    int se=0,so=0;
  //  clrscr();
 // gotoxy(20,13);
    printf("enter the end point of the number\n");
    scanf("%d",&num);
    for(i;i<=num;i++)
    {

        if(i%2==0)
        {

            se=se+i;
        }
        else
        {
            so=so+i;
        }
    }
    printf("print the sum of even no=%\n",se);
    printf("print the sum of all odd no=%d",so);
    getch();
}
