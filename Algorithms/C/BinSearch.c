#include<stdio.h>
#include<conio.h>
int main()
{
   int i, firstNumber, lastNumber, midNumber, N, search, array[10],flag=0;
   printf("****BINARY SEARCH****\n\n");
    printf("Enter number of elements for list:\n");
   scanf("%d",&N); 
   printf("Enter %d integers:\n", N);
   for (i=0; i<N; i++)
      scanf("%d",&array[i]); 
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   firstNumber = 0;
   lastNumber = N-1;
   while (firstNumber <= lastNumber) {
	 midNumber = (firstNumber+lastNumber)/2;
      if (array[midNumber] < search)
         firstNumber = midNumber+1;    
      else if (array[midNumber] == search) {
      		flag=1;
         printf("%d is at %d.\n", search, midNumber+1);
         break;
      }
      else
         lastNumber = midNumber -1;
   }
   	if(flag==0)
      printf(" %d Not found in the list.\n", search);
   return 0;  
}
