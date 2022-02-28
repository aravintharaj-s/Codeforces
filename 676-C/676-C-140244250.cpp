#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
ll n,k;string s;
solve(char x)
{
     ll l=0,r=0,cnt=0,ans=0;
     while(l<n&&r<n)
     {
          while((s[r]==x||cnt<k)&&r<n)
          {
               if(s[r]!=x)
               cnt++;
               
               r++;
          }
          ans=max(ans,r-l);
          while(s[l]==x&&l<=r)
          l++;
          l++;
          cnt--;
     }
     return ans;
}
int main()
{ 
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     
     cin>>n>>k>>s;
     cout<<max(solve('a'),solve('b'));
}