#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    int a[n+3]={0};
    for(int i=2;i<=n+1;i++)
    {
         cin>>q;
         a[i]=a[i-1]+q;
    }
    int s,t;
    cin>>s>>t;
     if(s>t)
    {
         swap(s,t);
    }
    int d=a[t]-a[s];
    int ans=min(d,(a[n+1]-d));
    cout<<ans;
}