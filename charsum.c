#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i=0,a,sum=0;
      scanf("%s",ch);
      while(ch[i]!='\0')
     {
        a=ch[i]-96;
        sum+=a;
        i++;
     }
    printf("%d",sum);
    return 0;
}
