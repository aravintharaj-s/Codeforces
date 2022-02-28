#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
cin>>n;
if(n==1){
    cout<<1;
    return 0;
}
vector<long long>arr;
arr.push_back(n);
long long last=n;
for(long long i=n-1;i>=2;i--){
    if(n%i==0 && last%i==0){
        last=i;
        arr.push_back(i);
    }
}
arr.push_back(1);
for(auto i:arr){
    cout<<i<<" ";
}
 
}