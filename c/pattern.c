#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
        for(i=1; i<=n; i++)
    {
        printf("\n");
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=n; k>=i; k--)
        {
            printf("* ");
        }
      }
      for(i=n; i>=1; i--)
      {
          printf("\n");
          for(j=1; j<i; j++)
          {
              printf(" ");
          }
          for(k=n; k>=i; k--)
          {
              printf(" *");
          }
      }
      printf("\n");

    getch();
}
