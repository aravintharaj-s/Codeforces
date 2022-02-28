#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int n=s.length(),same=0,cnt=0;
     for(int i=0;i<n;i++)
     {
          if(s[i]!=s[i+1])
          {
               cnt++;
               same=0;
          }
          if(s[i]==s[i+1])
          {
               same++;
               if(same==5)
               {
                    cnt++;
                    same=0;
               }
          }
     }
     cout<<cnt<<endl;
     return 0;
}