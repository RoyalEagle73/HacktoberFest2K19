#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,result="";
    int i,hash[123]={0};
    cout<<"enter your string"<<endl;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(hash[s[i]]==0)
        {
        hash[s[i]]=1;
        result+=s[i];
    }
    }
     cout<<result;
}
