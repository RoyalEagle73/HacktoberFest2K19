#include<stdio.h>
int main()
{
	int a[5],i;
	float b[5],total;
	for(i=0;i<=4;i++)
		{
			scanf("%d %f",&a[i],&b[i]);
			total+=a[i]*b[i];
		 } 
		 printf("Total Amount is:%f",total);
		 return 0;
}
