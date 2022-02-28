#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,m,a,b;
     cin>>n>>m;
     long long t[5005][5005],occ[n+1]={0};
     for(int i=0;i<m;i++)
     {
          cin>>a>>b;
          occ[a]+=1;
          occ[b]+=1;
          t[a][b]=t[b][a]=1;
     }
     long long ans=INT_MAX;
     for(int i=1;i<=n;i++)
     {
          for(int j=i+1;j<=n;j++)
          {
               if(t[i][j])
               {
                    for(int k=j+1;k<=n;k++)
                    {
                         if(t[i][k]&&t[j][k])
                         {
                              ans=min(ans,occ[i]+occ[j]+occ[k]);
                         }
                    }
               }
          }
     }
     if(ans==INT_MAX)
     cout<<-1<<endl;
     else
     cout<<ans-6<<endl;
}