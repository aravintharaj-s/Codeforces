#include<iostream>
using namespace std;
long long n,m,x,y,z;
main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		y*=m; y+=x;
	}cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		z*=m; z+=x;
	}if(y>z)cout<<">"; if(y<z)cout<<"<"; if(y==z)cout<<"=";
}