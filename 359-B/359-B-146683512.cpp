#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	cout<<k+1;
	for(int i=1;i<=n*2;++i)
		if(i!=k+1) cout<<" "<<i;
	return 0;
}