#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,x,ans=0;
     cin>>n>>x;
     long long c[n];
     for(int i=0;i<n;i++)
     cin>>c[i];
     sort(c,c+n);
     for(int i=0;i<n;i++)
     {
          ans+=x*c[i];
          if(x>1)
          x--;
     }
     cout<<ans;
}