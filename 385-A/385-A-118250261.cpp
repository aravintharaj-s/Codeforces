#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     int n,c,ans=0,d=0;
     cin>>n>>c;
     int a[n];
     cin>>a[0];
     for(int i=1;i<n;i++)
     {
          cin>>a[i];
          d=a[i-1]-a[i];
          if(ans<d)
          ans=d;
     }
     if(c<=ans)
     cout<<ans-c;
     else
     cout<<0;
}