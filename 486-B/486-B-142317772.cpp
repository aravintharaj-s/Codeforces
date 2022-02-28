#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     int n,m;
     cin>>n>>m;
     int a[n][m],b[n][m],ans[n][m],cnt1=0;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<m;j++)
          {
               cin>>a[i][j];
               b[i][j]=0;
               ans[i][j]=1;
          }
     }
     int i,j,k;
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               if(a[i][j]==0)
               {
                    for(k=0;k<n;k++)
                         ans[k][j]=0;
                    for(k=0;k<m;k++)
                         ans[i][k]=0;
               }
          }
     }
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               if(ans[i][j]==1)
               {
                    for(k=0;k<n;k++)
                         b[k][j]=1;
                    for(k=0;k<m;k++)
                         b[i][k]=1;
               }
          }
     }
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               if(a[i][j]!=b[i][j])
               {
                    cout<<"NO";
                    return 0;
               }
          }
     }
     cout<<"YES"<<endl;
     for(i=0;i<n;i++)
     {
          for(j=0;j<m;j++)
          {
               cout<<ans[i][j]<<" ";
          }
          cout<<endl;
     }
     return 0;
}