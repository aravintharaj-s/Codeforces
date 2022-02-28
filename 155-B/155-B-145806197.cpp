#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     int n,a,b,cntp=0,cntc=0;
     cin>>n;
     vector<pair<int,int>>p;
     for(int i=0;i<n;i++)
     {
          cin>>a>>b;
          p.push_back(make_pair(b,a));
     }
     sort(p.begin(),p.end());
     cntc+=p[n-1].first;
     cntp+=p[n-1].second;
     for(int i=n-2;i>=0;i--)
     {
          if(cntc>0)
          {
               cntc+=p[i].first;
               cntp+=p[i].second;
          }
          else
          {
               break;
          }
          cntc--;
     }
     cout<<cntp<<endl;
}