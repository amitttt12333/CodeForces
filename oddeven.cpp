#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
   int  aresult=0;
   int  bresult=0;
    while(t--)
    {
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i++)
    {
        if(i%2==0)
        {
      if(a[n-1]%2==0)
      aresult+=a[n-1];
        }
    else 
    if(i%2==1)
    {
    bresult+=a[n-1];
    }
    }
        if(aresult==bresult)
    cout<<"Tie"<<endl;
    else if(aresult>bresult)
    cout<<"Alice"<<endl;
    else 
    cout<<"Bob"<<endl;
    }
}
