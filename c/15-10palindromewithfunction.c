#include<stdio.h>
#include<string.h>
  int main()
  {
      int i;
      char a[50],b[50];
      printf("enter a string::");
      scanf("%s",a);
      strrev(strcpy(b,a));
      if(strcmp(a,b)==0)
       printf("string is palindrome");
      else
       printf("string is not palindrome");
       return 0;
  }
