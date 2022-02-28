#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,cntmin=0;
    cin>>a>>b;
    if(a<2&&b<2)
    {
         cout<<0;
         return 0;
    }
    while(a>2||b>2)
    {
         if(a>b)
         {
              b+=1;
              a-=2;
         }
         else
         {
              a+=1;
              b-=2;
         }
         cntmin++;
    }
    cout<<cntmin+1;
}