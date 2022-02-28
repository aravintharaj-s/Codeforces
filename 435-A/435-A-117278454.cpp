#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
     int n,m,j;
     cin>>n>>m;
     int a[n],cntg=0,cnt=1;
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
          if(cntg+a[i]<=m)
          {
               cntg+=a[i];
          }
          else
          {
               cnt++;
               cntg=a[i];
          }
     }
     cout<<cnt;
}