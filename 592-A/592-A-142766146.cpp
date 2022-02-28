#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     char c[10][10];
     int b1=100,b2=100;
     for(int i=0;i<8;i++) 
for(int j=0;j<8;j++)cin>>c[i][j];
for(int i=0;i<8;i++)  {
for(int j=0;j<8;j++){
if(c[j][i]=='W') b1 = min(b1, j);
if(c[j][i]=='B') break;
}
for(int j=7; j>=0; j--) {
if(c[j][i]=='B') b2 = min(7-j, b2);
if(c[j][i]=='W') break;
}
}
(b1<=b2)?cout<<"A":cout<<"B";
}