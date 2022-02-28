#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);

     int a=-1,b=0,c=0,x=0,y=0,z,d=-1,k=0,n,m,sum=0,ans=0,mid=-1,cnt=0,l,r;
    cin>>n>>m>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    if(m<=k||m==0)
    {
        cout<<0<<endl;
        return 0;
    }
    x=k;
    int i=0;
    while(i<n)
    {
        x+=(arr[i]-1);
        ans++;
        if(x>=m)
        {
            break;
        }
        i++;
    }
    if(x<m)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans;
    return 0;

}