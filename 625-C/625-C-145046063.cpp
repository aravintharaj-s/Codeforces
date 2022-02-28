#include<bits/stdc++.h>
using namespace std;
int a[501][501];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     int k,n,c=1;
     cin>>n>>k;
     if(k==1||k==n)
     {
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    a[i][j]=c;
                    c++;
               }
          }
          if(k==n)
          {
               for(int i=0;i<n;i++)
               {
                    swap(a[n-1][i],a[i][n-1]);
               }
          }
     }
     else
     {
          c=n*n;
          for(int i=n-1;i>=0;i--)
          {
               for(int j=n-1;j>=k-1;j--)
               {
                    a[i][j]=c;
                    c--;
               }
          }
          c=1;
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<k-1;j++)
               {
                    a[i][j]=c;
                    c++;
               }
          }
     }
     int cnt=0;
     for(int i=0;i<n;i++)
     {
          cnt+=a[i][k-1];     
     }
     cout<<cnt<<endl;
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    cout<<a[i][j]<<" ";
               }
               cout<<endl;
          }
}