#include<stdio.h>
#define max 155
int main()
{
    int a[max][max],i,j,n;
    printf("enter the n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
                a[i][j]=1;

        else
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }}
for(i=0;i<n;i++)
      {
        for(j=0;j<=i;j++)

            printf("%d ",a[i][j]);
            printf("\n");
      }
        return 0;

}
