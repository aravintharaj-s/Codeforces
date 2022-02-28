#include<bits/stdc++.h>
using namespace std;
long long there[100005]={0},a[100005]={0};
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,i,j,x;
     cin>>n;
     vector<int>ans;
     for(i=1;i<=n;i++)
     {
          cin>>x;
          if(there[x]==0&&x<=n)
          {
               there[x]=1;
               a[i]=x;
          }
          else
          a[i]=0;
     }
     for(j=1;j<=n;j++)
     {
          if(there[j]==0)
          {ans.push_back(j);}
     }
     int k=0;
     for(j=1;j<=n;j++)
     {
          if(a[j]==0)
          {a[j]=ans[k++];}
          cout<<a[j]<<" ";
     }
}