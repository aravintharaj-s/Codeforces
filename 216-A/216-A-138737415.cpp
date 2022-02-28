#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     set<int>s;
     int a,b,c;
     cin>>a>>b>>c;
     cout<<(a*b+b*c+c*a)-(a+b+c)+1;
     return 0;
     
}