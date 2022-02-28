#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     string s,m;
     cin>>s>>m;
     int n=m.length(),cnt=0;
     for(int i=0;i+n<=s.length();i++)
     {
          string f=s.substr(i,n);
          if(f==m)
          {
               cnt++;
               i+=n-1;
          }
     }
     cout<<cnt;
}