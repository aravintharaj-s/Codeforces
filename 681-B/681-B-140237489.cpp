#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main()
{ 
     long long a=0,b=0,n;
     cin>>n;
     for(a=0;a<=n;a+=1234567)
     {
          for(b=0;b<=n-a;b+=123456)
          {
               if((n-a-b)%1234==0)
               {
                    cout<<"YES";
                    return 0;
               }
          }
     }
     cout<<"NO";
     return 0;
}