#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,x,mx=2*1000*1000*1000,mn=-mx,ans;string s,t;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          cin>>s>>x>>t;
          if(t=="N")
          {
               if(s=="<")
               s=">=";
               else if(s==">")
               s="<=";
               else if(s=="<=")
               s=">";
               else
               s="<";
          }
          if(s==">="){
            mn=max(mn,x);
        }else if(s==">"){
            mn=max(mn,x+1);
        }else if(s=="<="){
            mx=min(mx,x);
        }else{
            mx=min(mx,x-1);
        }
    }
    if(mn<=mx){
        cout<<mn<<"\n";
    }else{
        cout<<"Impossible\n";
        
    }
     
     return 0;
}