#include<limits.h>
int main()
{
    int p;
    p=sizeof(short int)*CHAR_BIT;
    printf("Size of short int=%d\n",p);
    p=sizeof(int)*CHAR_BIT;
    printf("Size of int=%d\n",p);
    p=sizeof(long int)*CHAR_BIT;
    printf("Size of long int=%d\n",p);
    p=sizeof(long long int)*CHAR_BIT;
    printf("Size of long long int=%d\n",p);
    p=sizeof(unsigned long long int)*CHAR_BIT;
    printf("Size of unsigned long long int=%d\n",p);
}
