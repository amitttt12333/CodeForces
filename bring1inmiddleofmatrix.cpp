 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    int a,rpos,cpos;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
         cin>>a;
            if(a==1)
            {
                rpos=i;
                cpos=j;
            }

        }
       
    }
                ans+=abs(2-rpos)+abs(2-cpos);//look 1 will always have to move 2 reach in middle
             cout<<ans<<endl;
}