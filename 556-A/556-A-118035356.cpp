#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long cnt1=0,cnt0=0,n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='0')
         cnt0++;
         else
         cnt1++;
    }
    if(cnt1>=1&&cnt0>=1)
    {
    long d=abs(cnt1-cnt0);
    cout<<d;
    }
    else
    {
         cout<<n;
    }
}