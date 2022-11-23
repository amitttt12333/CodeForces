#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limka,bob;
    cin>>limka>>bob;
    int count=0;
    while(limka<=bob)
    {
    limka=limka*3;
    bob=bob*2;
    count++;
    }
    cout<<count<<endl;

}