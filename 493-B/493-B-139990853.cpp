#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     vector<long long>first,second;string ff="first",ss="second",ans;
     long long n,sumf=0,sumc=0,f=0,s=0;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          int c;
          cin>>c;
          if(c>0)
          {sumf+=c;first.push_back(c);f++;}
          else
          {sumc+=abs(c);second.push_back(c);s++;}
          if(i==n-1)
          {
               if(c>0)
               ans=ff;
               else
               ans=ss;
          }
     }
     if(sumc>sumf)
     cout<<"second"<<endl;
     else if(sumc<sumf)
     cout<<"first"<<endl;
     else
     {
          bool fl=false;
          for(long long i=0,j=0;i<f&&j<s;i++,j++)
          {
               if(first[i]>abs(second[j]))
               {
                    cout<<"first"<<endl;
                    fl=true;
                    return 0;
               }
               else if(first[i]<abs(second[j]))
               {
                    cout<<"second"<<endl;
                    fl=true;
                    return 0;
               }
          }
          if(!fl)
          cout<<ans<<endl;
     }
}