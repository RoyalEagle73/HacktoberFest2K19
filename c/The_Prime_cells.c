#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool p[1000];                   //declaring boolean array
    memset(p,true,sizeof(p));       //Initializing true to all array elements
    int i,j;
    /* finding array of prime numbers upto 1000*/
    for(i=2;i<1000;i++)
        if(p[i])
        for(j=i*i;j<1000;j=j+i)
            p[j]=false;
    int n,count=0,sum=0;
	cin >> n;                       // Reading input from STDIN
	int arr[n][n];
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	        cin>>arr[i][j];         // Reading input from STDIN
	        
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++,sum=0)
	        {
	         if(i-1>=0)             //checking top boundary
	         sum+=arr[i-1][j];
	         if(i+1<n)              //checking bottom boundary
	         sum+=arr[i+1][j];
	         if(j-1>=0)             //checking left boundary
	         sum+=arr[i][j-1];
	         if(j+1<n)              //checking right boundary
	         sum+=arr[i][j+1];
	         if(p[sum])             //checking if sum is a prime number or not
	         count++;
	        }
	    
	cout << count << endl;		// Writing output to STDOUT
return 0;
}
