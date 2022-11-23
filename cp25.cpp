#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  
    while(t--)
    {
        int prv=-1;
        int res=0;
       string str;
       cin>>str;
       
       for(int i=0;i<str.size();i++)
       {
       if(str[i]=='1')
       {
        if(prv!=-1)
       res+=(i-prv-1);
         prv=i;
       }
       }
       cout<<res<<endl;
      
    }
    return 0;
}