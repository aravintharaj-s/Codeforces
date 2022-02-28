#include<bits/stdc++.h>
using namespace std;
void solve()
{long long int n,m;
string alp="cdefghijklmnopqrstuvwxyz";
cin>>n>>m;
if(n==1 && m==1){
    cout<<"a";
    return;
}
if(n<m ||m==1){
    cout<<-1;
    return;
}
string str;
m=m-2;
int e=n-m;
for(int i=0;i<e/2;i++){
        str+="ab";
    }
if(e%2!=0){
    str+="a";
}
str+=alp.substr(0,m);
cout<<str;
 
 
 
}
 
 
 
int main()
{
        ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    //cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}