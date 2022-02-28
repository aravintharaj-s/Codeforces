#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long a[n]={0};
    for(int i=1;i<=n;i++)
    {
         long long c,t;
         cin>>c>>t;
         a[i]=c*t+a[i-1];
    }
    int j=0;
    while(m--)
    {
         int v;
         cin>>v;
         while(v>a[j])
         j++;
         cout<<j<<endl;
    }
}