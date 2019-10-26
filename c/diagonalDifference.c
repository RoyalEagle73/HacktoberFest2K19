#include<stdio.h>
#include<math.h>
#define size 100
int main(){
	int a[size][size],i,j,x=0,n,y=0;
	printf("Enter size of Array\t");
	scanf("%d",&n);
	printf("Enter the Element of Array\t");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		scanf("%d",&a[i][j]);
	}
	
}
printf("Entered Array is\t");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		printf("%d\t",a[i][j]);
	}
	printf("\n\t\t\t");
}
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		if(i==j)
		x+=a[i][j];
		
	}
	
}
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		int t=j+i;
		
		if(t==n-1)
		y=y+a[i][j];
		}
	
}
int dif=abs(x-y);
printf("\nDiagonal Difference is=%d",dif);
return 0;	
}
