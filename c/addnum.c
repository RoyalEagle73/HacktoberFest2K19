#include"stdio.h"
int sumofdigit(int n);
void main(){
	int n,r,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	sum=sumofdigit(n);
	printf("%d",sum);
}
int sumofdigit(int n){
	static int sum=0;
	int r;
	if(n!=0){
		r=n%10;
		sum=sum+r;
		sumofdigit(n/10);
	}
	return(sum);
}
