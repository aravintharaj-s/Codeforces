#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     cout<<fixed<<setprecision(2);
     int a11,a12,a13,b21,b22,b23,c31,c32,c33;
     cin>>a11>>a12>>a13>>b21>>b22>>b23>>c31>>c32>>c33;
     int sum=(a12+a13+b21+b23+c31+c32)/2;
     a11=sum-a12-a13;
     b22=sum-b21-b23;
     c33=sum-c31-c32;
     cout<<a11<<" "<<a12<<" "<<a13<<endl<<b21<<" "<<b22<<" "<<b23<<endl<<c31<<" "<<c32<<" "<<c33<<endl;
}