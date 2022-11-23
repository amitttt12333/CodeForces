#include<bits/stdc++.h>
using namespace std;
  int main()
{
   long long t;
   cin>>t;
   vector<int>ans;
    int n;
    cin>>n;
  
   while(t--)
   {
    vector<int>nums;
    for(int i=0;i<n;i++)
        cin>>nums[i];
     vector<int>n2(nums);
    sort(n2.begin(),n2.end());
  for(int i=0;i<n-1;i++)
  {
    int result= nums[i]-n2[n-1];
    ans.push_back(result);
  }
  ans.push_back(n2[n-1]-n2[n-2]);
 for(int j=n-1;j>=0;j--)
     cout<<ans[j]<<endl;
   }
  
  
 }   