#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i=0;
    cin>>n;
    int result=0;
    int count=0;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
   int l=0,r=1;
   int res=1;
   while(r<n)
   {
    if(nums[r]>nums[r-1])
    {
    res=max(res,r-l+1);
    r++;
    }else
    {
        l=r;
        r++;
    }
   }
   cout<<res<<endl;

}