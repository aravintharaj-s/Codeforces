#include <bits/stdc++.h>
using namespace std;
int n,m;

int main(){
  cin>>n>>m;
  int i=0;
  while(n--){
    if((m-i)&1)cout<<(m+i+1)/2<<endl;
    else cout<<(m-i)/2<<endl;
    i=(i+1)%m;
  }
  return 0;
}