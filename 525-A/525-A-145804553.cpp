#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     int n,cnt=0;string s;
     cin>>n>>s;
     n=2*n-2;
     map<char,int>mp;
     for(int i=0;i<n;i++)
     {
          char x=s[i];
          if(islower(x))
          mp[x]++;
          else
          {
               char k=tolower(x);
               if(mp[k]>0)
               mp[k]--;
               else
               cnt++;
          }
     }
     cout<<cnt<<endl;
}