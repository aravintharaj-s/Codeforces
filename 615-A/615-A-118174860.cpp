#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[m+1]={0};
   for(int i=0;i<n;i++)
   {
        int x;
        cin>>x;
        for(int i=0;i<x;i++)
        {
             int y;
             cin>>y;
             a[y]++;
        }
   }
   for(int i=1;i<=m;i++)
   {
        if(a[i]==0)
        {
             cout<<"NO";
             return 0;
        }
   }
   cout<<"YES";
}