#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int sum=0;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
      if(s[i]=="--x")
      {
        sum=sum-1;
      }else 
      sum=sum+1;
    }
    cout<<sum;
}