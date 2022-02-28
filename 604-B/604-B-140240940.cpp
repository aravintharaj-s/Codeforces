#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main()
{ 
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     ll n,k;
     cin>>n>>k;
     ll a[n];
     for(ll i=0;i<n;i++)
     cin>>a[i];
     ll ans=a[n-1];
     for(ll i=0;i<n-k;i++)
     {
          ans=max(ans,a[i]+a[2*(n-k)-1-i]);
     }
     cout<<ans;
}