#include<stdio.h>
int main()
{
int i,arr[5],f=0,n;
printf("enter array of element:");
for(i=0;i<5;i++)
  {
  scanf("%d",&arr[i]);
  }
  printf("enter search element:");
  scanf("%d",&n);
  for(i=0;i<5;i++)
  {
   if(arr[i]==n)
    f=1;
  }
  if(f==1)

   printf("found");
   else
   printf("not found");

return 0;
}
