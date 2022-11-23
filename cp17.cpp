#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string s;
    cin>>s;
int n = s.length();
int count=0;
sort(s.begin(),s.end());
for(int i=1;i<n;i++)
{
 if(s[i]!=s[i-1])
 {
    count++;
 }
}
if(count%2==0)
cout<<"IGNORE HIM!"<<endl;
else
cout<<"CHAT WITH HER!"<<endl;

}