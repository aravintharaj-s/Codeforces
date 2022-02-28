#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
     long long n,m,x,cntm=0,cnto=0;
     cin>>n>>m;
     for(int i=0;i<n;i++)
     {
          cin>>x;
          if(x==-1)
          cntm++;
          else cnto++;
     }
     long long an=min(cnto,cntm)*2;
     long long a,b;
     for(int i=0;i<m;i++)
     {
          cin>>a>>b;
          if((b-a)%2!=0&&(b-a)<an)
          cout<<1<<endl;
          else
          cout<<0<<endl;
     }
}