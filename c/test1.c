#include <stdio.h>

int main(){
	int n,t,i,s;
	scanf("%d", &t);

	while(t)
	{
	    int fact=1,sum=0;
	    scanf("%d", &n);
	    for(i=1;i<=n;i++)
	    {
	        sum+=n-i;
	    }
	    for(i=1;i<=n;i++)
        {
            fact*=i;
        }
	    s=sum*fact;
	    printf("%d\n", s);
	    t--;
	}


}
