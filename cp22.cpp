#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str1;
   cin>>str1;
   vector<string>str2(5);
   for(int i =0;i<5;i++)
   cin>>str2[i];
  for(auto h:str2)
   {
    if(h[0]==str1[0]||h[1]==str1[1])
    {
    cout<<"YES";
    return 0;
    }
   }

    cout<<"NO";
    return 0;
}