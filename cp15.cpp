#include <bits/stdc++.h>
using namespace std;
int main()
{
   int k,n,w;
   cin>>k>>n>>w;
   int tcost=(w*0.5)*(2*k+(w-1)*k); 
   if(tcost>n)
   cout<<tcost-n<<endl;
   else 
   cout<<"0"<<endl;
}