
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        long n,ar[100000],i,sum=0,ss=0,c=0,res=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&ar[i]);
        }
        for(i=0;i<=n;i++)
        {
           // scanf("%d",&ar[i]);
            if(ar[i]!=-1&&i<n)
            {
                sum+=ar[i];
                ss+=ar[i]*ar[i];
                c++;
            }
            else
            {
                if(c>1)
                {
                    res+=(sum*sum-ss)/2;
                }
                    c=0;
                    sum=0;
                    ss=0;

            }
        }
        printf("%ld\n",res);
        t--;
    }


}
