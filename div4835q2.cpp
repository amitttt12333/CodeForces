#include<bits/stdc++.h>
using namespace std;
  int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    cout<<((int)str[n-1]-87)-9<<endl;
   }
}