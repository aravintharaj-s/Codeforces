#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n;
     cin>>n;
     vector<pair<long long,long long>>in,sw;
     for(int i=1;i<=n;i++)
     {
          int d;
          cin>>d;
          in.push_back(make_pair(d,i));
     }
     sort(in.begin(),in.end());
     for(int i=1;i<n&&sw.size()<2;i++)
     {
          if(in[i].first==in[i-1].first)
          {
               sw.push_back(make_pair(i,i-1));
          }
     }
     if(sw.size()<2)
     {
          cout<<"NO";
          return 0;
     }
     cout<<"YES"<<endl;
     for(auto i : in)
     cout<<i.second<<" ";
     cout<<endl;
     swap(in[sw[0].first],in[sw[0].second]);
     for(auto i : in)
     cout<<i.second<<" ";
     cout<<endl;
     swap(in[sw[1].first],in[sw[1].second]);
     for(auto i : in)
     cout<<i.second<<" ";
}