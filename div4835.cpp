
#include<bits/stdc++.h>
using namespace std;
  int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
    vector<int>nums(3);
    for(int i=0;i<3;i++)
    {
        cin>>nums[i];
    }
   sort(nums.begin(),nums.end());
   if(nums[1]>=nums[0]&&nums[1]<=nums[2] );
    cout<<nums[1]<<endl;
    }

}