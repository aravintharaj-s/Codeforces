#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     int n,k,cnt=0,ans=0;
     cin>>n>>k;
     while(n--)
     {
          string s;
          cin>>s;
          cnt=0;
          for(int i=0;i<s.length();i++)
          {
               if(s[i]=='4'||s[i]=='7')
               cnt++;
          }
          if(cnt<=k)
          ans++;
     }
     cout<<ans;
}