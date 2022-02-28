#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     set<int>s;
     int n,x;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          cin>>x;
          s.insert(x);
     }
     if(s.size()==1||s.size()==2)
     {cout<<"YES";return 0;}
     else if(s.size()==3)
     {
          set<int>::iterator it;int j=0,ans[3];
          for(it=s.begin();it!=s.end();it++)
          {ans[j]=*it;j++;}
          if(ans[0]+ans[2]==2*ans[1])
          {
               cout<<"YES";
               return 0;
          }
          cout<<"NO";
     }
     else
     cout<<"NO";
     return 0;
     
}