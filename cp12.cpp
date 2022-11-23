#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a=0;
    while(n!=0)
    {
        if(n%10==7||n%10==4)
        a++;
        n/=10;
        
    }
    if(a==4||a==7)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}