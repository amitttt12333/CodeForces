#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
   int res1= max(x1,max(x2,x3));
    int res2=min(x1,min(x2,x3));
    cout<<res1-res2<<endl;
}