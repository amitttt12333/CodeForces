#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     int total=0;
     
    while(t--)
    {
        int n;cin>>n;
      int a[n];
        int  possum=0;
        int negsum=0; 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                possum+=a[i];
            }else
            negsum+=a[i];
           
        }
          total= possum+negsum;
         if(total<0)
            {
               cout<<(-1)* total<<endl;
            }
            else{
        cout<<total<<endl;
            }
        
    }
   
    return 0;
}