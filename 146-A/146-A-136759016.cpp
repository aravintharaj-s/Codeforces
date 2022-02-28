#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     string a;
     cin>>a;
     int lh=0,fh=0;
     for(int i=0;i<n;i++)
     {
          if(a[i]!='4'&&a[i]!='7')
          {
               cout<<"NO";
               return 0;
          }
          if(i<(n/2))
          fh+=(a[i]-'0');
          else
          lh+=(a[i]-'0');
     }
     if(lh==fh)
     cout<<"YES";
     else
     cout<<"NO";
     return 0;
}