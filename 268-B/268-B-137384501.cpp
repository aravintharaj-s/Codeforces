#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);cout.tie(nullptr);
     cout<<fixed;cout<<setprecision(10);
     long long n,s=0;
     cin>>n;
     for(int i=1; i<n; i++)
    {

        s=s+((n-i)*i);
    }
    cout<<s+n;
}