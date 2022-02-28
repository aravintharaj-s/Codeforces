#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
     int n,ans=0;
     cin>>n;
     int a[n][n],r[n]={0},c[n]={0};
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
              cin>>a[i][j];
              r[i]+=a[i][j];
         }
     }
     for(int j=0;j<n;j++)
     {
         for(int i=0;i<n;i++)
         {
              c[j]+=a[i][j];
         }
     }
     for(int j=0;j<n;j++)
     {
         for(int i=0;i<n;i++)
         {
              if(r[i]<c[j])
              ans++;
         }
     }
     cout<<ans;
}