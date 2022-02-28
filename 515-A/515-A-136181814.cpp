#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long a,b,s;
     cin>>a>>b>>s;
     long long x=abs(a)+abs(b);
     if(s<x)
     cout<<"No";
     else if(abs(s-x)%2!=0)
     cout<<"No";
     else
     cout<<"Yes";
     return 0;
}