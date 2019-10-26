#include<stdio.h>
int main()
 { int arr[10000],i;
 int t,a,n,k,sum=0;
 scanf("%d",&t);
 while(t--)
 {
   scanf("%d",&a);
   scanf("%d",&k);
   scanf("%d",&n);
   for(i=0;i<n-1;i++)
   {
    arr[i]=k;
     sum=sum+arr[i];
   }
   printf("%d",sum+a);
   printf("\n");
   sum=0;
 }

}
