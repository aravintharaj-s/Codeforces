#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);cout.tie(nullptr);
     cout<<setprecision(2)<<fixed;

     vector<long long>dp(100005,0);
     vector<long long>cnt(100005,0);
     int n,maxi=-1;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          int x;
          cin>>x;
          cnt[x]++;
          maxi=max(maxi,x);
     }
     dp[0]=0;
     dp[1]=cnt[1];
     for(int i=2;i<=100000;i++)
     {
          dp[i]=max(cnt[i]*i+dp[i-2],dp[i-1]);
     }
     cout<<dp[maxi];
     return 0;
}