#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,sum=0,d=2;
     cin>>n;
     long long a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     sort(a,a+n);
     for(int i=0;i<n;i++)
     {
          if(i==n-1||i==n-2)
          {
               sum+=a[i]*n;
          }
          else
          {
               sum+=a[i]*d;
               d++;
          }
          
     }
     cout<<sum<<endl;
}