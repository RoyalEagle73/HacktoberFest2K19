#include<iostream>
using namespace std;
int permute(int input[],int length,int output[][20])
{
    if(length==1)
    {
        output[0][0]=input[0];
        return 1;
    }
    int s1=permute(input+1,length-1,output);
    int m=0;
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(j==length-1)
                output[i][j]=input[0];
            else
            {
                for(int k=length-1;k>j;k--)
                    output[s1+m][k]=output[i][k-1];
                output[s1+m][j]=input[0];
                for(int k=0;k<j;k++)
                    output[s1+m][k]=output[i][k];
                m++;
            }
        }
    }
    return s1+m;
}
int fact(int n)
{
    if(!n)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter Number of Element: ";
    cin>>n;
    int input[n];
    int output[fact(n)][20];
    for(int i=0;i<n;i++)
        cin>>input[i];
    int l=permute(input,n,output);
    cout<<"::Permutation::"<<endl;
    for(int i=0;i<fact(n);i++)
    {
        for(int j=0;j<n;j++)
            cout<<output[i][j]<<" ";
        cout<<endl;
    }
}
