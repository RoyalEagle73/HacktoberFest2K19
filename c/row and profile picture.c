#include <stdio.h>
int main()
{
   int n,w,h,l,i;
	scanf("%d", &l);
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
       	scanf("%d%d", &w,&h);

   if(w==h&&h>=l)
   {
   printf("ACCEPTED\n");
   }
  else if(w<l||h<l)
  {
   printf("UPLOAD ANOTHER\n");
  }
     else
    {
     printf("CROP IT\n");
     }
}
   return 0;
}

