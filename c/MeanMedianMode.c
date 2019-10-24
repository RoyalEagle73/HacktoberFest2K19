#include<stdio.h>

int main()
{
 int a[50],i,j,n,temp;
 float mean=0,med=0,mod=0;
 printf("Enter no :- ");
 scanf("%d",&n);
 printf("Enter values :- ");

 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
mean += a[i];
mean=mean/n;
printf("mean = %0.2f\n\n\t",mean);

for(i=0;i<n;i++)
   {
    for(j=0;j<i;j++)
        {
          if(a[i]>a[j])
          {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
          }
    }
}

for(i=0;i<n;i++)
    printf("\t%d",a[i]);

if(n%2==0)
    med=(a[(n/2)]+a[(n/2)-1])/2;
else
    med=a[((n+1)/2)-1];
printf("\nmedian = %0.2f",med);
mod=(3*med)-(2*mean);
printf("\n\nmode = %0.2f",mod);
return 0;
 }
