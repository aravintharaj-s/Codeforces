#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     int n,k,x,cnt=0,ans=0;
     cin>>n>>k;
     if(n<3||k>5)
     {
          cout<<0;return 0;
     }
     k=5-k;
     for(int i=0;i<n;i++)
     {
          cin>>x;
          if(x<=k)
          {
               cnt++;
               if(cnt==3)
               {
                    ans+=1;
                    cnt=0;
               }
          }
     }
     cout<<ans;
     return 0;
}