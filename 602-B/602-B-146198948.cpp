#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,j,ans=0; 
  cin>>n;
  int a[1000005]={0};
  
  for(i=0;i<n;++i)
  {
    cin>>j;
    a[j+1]++;
    a[j]++;
    a[j+2]=a[j-1]=0;
    ans=max(ans,max(a[j],a[j+1]));
  }
  cout<<ans<<endl;
  return 0;
}