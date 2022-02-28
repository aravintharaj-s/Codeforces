#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     string str;
long long k;
cin>>str>>k;
long long temp;
for(long long i=0;i<str.length();i++){
    temp=i;
    for(long long j=i+1;j<str.length()&& j-i<=k;j++){
            if(str[j]>str[temp]){
                temp=j;
            }
    }
    for(long long x=temp;x>i;x--){
        swap(str[x],str[x-1]);
    }
    k-=temp-i;
}
cout<<str;
 
}