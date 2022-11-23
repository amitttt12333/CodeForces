 #include<bits/stdc++.h>
 using namespace std;
 int main()
    {
        int n;
        cin>>n;
        vector<int>ans;
        
        while(n!=0)
        {
         int r=n%10;
         if(r >4 && r!=9)
         {
           r=9-r;
           ans.push_back(r);
         }else if(r==9){
            ans.push_back(r);
         }else 
         ans.push_back(r);
         n=n/10;
        }
        for(int i=0; i< ans.size();i++){
          cout << ans[i];
        }
        return 0;
    }