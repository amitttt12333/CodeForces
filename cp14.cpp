#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t;
    cin>>t;
    while(t--)
    {
    if (n % 10 == 0)
    {
        n = n / 10;
    }
    else
    {
       n=n-1;
    }
     }
    cout<<n<<endl;
   

}