#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,m;
     cin>>n>>m;
     if(n==1)
     {
          if(m==1)
          cout<<1;
     }
     else if(m==1)
     {
          cout<<m+1;
     }
     else
     (n-m>m-1)?cout<<m+1:cout<<m-1;
}