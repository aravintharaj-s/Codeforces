#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
   int n,m,a;
   cin>>n>>m;
   int l[n+1]={0};
   for(int i=1;i<=m;i++)
   {
        cin>>a;
        for(int j=a;j<=n;j++)
        {
             if(l[j]==0)
             l[j]=a;
        }
   }
   for(int i=1;i<=n;i++)
   {
        cout<<l[i]<<" ";
   }
}