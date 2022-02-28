#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     long long n,k,m,x,ans=INT_MAX,cnt;
cin>>n>>k;
long long l=n/2,r=n;
while(l<=r){
    long long mid=(l+r)/2;
    cnt=mid,m=mid,x=k;
    while(1){
        m=mid/x;
        x*=k;
        cnt+=m;
        if(!m){
            break;
        }
    }
    if(cnt==n){
        ans=mid;
        break;
    }else if(cnt>n){
        ans=min(ans,mid);
        r=mid-1;
    }else{
        l=mid+1;
    }
}
cout<<ans<<" ";
}