#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
         int x;
         cin>>x;
        int count=0;
        int last= x%10;
        int sum1=(last-1)*10;  
        while(x>0)
        {
          count++;
          x=x/10;
        }
        for(int i=1;i<=count;i++)
        {
            sum1+=i;
        }
          cout<<sum1<<endl;
    }

} 