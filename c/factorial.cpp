#include<stdio.h>
int N=5,f=1;
 main(int n)
{
if(n<=N)
  {
   f=f*n;
   main(n+1);
}
  else
   printf("%d",f);
}
