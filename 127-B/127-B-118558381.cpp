#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     int n,a[101]={0},ans=0;
     cin>>n;
     while(n--)
     {
          int b;
          cin>>b;
          a[b]+=1;
     }
     for(int i=1;i<=100;i++)
     ans+=a[i]/2;
     cout<<ans/2;
}