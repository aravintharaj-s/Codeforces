#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     long long n,t,c;
     cin>>n>>t>>c;
     long long a[n],l=0,ans=0;
     for(int i=0;i<n;i++)
     {
          int x;
          cin>>x;
          if(x<=t)
          l++;
          else
          l=0;
          if(l>=c)
          ans++;
     }
     cout<<ans;
}