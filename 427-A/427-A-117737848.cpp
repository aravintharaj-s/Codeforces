#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,total=0,ans=0;
    cin>>n;
    while(n--)
    {
         int t;
         cin>>t;
         if(t==-1)
         {
              if(!total)
              ans++;
              else
              total--;
         }
         else
         total+=t;
    }
    cout<<ans;
}