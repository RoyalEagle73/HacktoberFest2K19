#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int con(char k) //for character to integer converion
{
    char a[2];
    a[0]=k;
    a[1]='\0';
    return atoi(a);
}
int main()
{
    char num[6]; int l,c,d,t=0,i=0,k=1;
    char *digit1[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char *digit2[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    char *digiteen[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    char *digitmore[]={"","","","Hundred","Thousand","","Lacs","Million"};
    printf("\nEnter A Number: ");
    gets(num);
    l=strlen(num);
    printf("\nNumber in word::");
    while(l)
    {
        c=con(num[i++]);
        if(l==2 || l==5)
            t=c;
        else
        {
            if(t)
            {
                if(t==1)
                    printf(" %s",digiteen[c]);
                else
                {
                    printf(" %s",digit2[t]);
                    if(c)
                        printf(" %s",digit1[c]);
                }
                t=0;
            }
            else
            {
                k=c; //case 1000 or 100000 etc.
                printf(" %s",digit1[c]);
            }
            if(k)
            printf(" %s",digitmore[l]);
        }
        k=1;
        l--;
    }
    printf("\n\n");
}
