#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,m;
     cin>>n>>m;
     cout<<min({n,m,(n+m)/3});
}