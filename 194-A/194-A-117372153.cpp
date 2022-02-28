#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n,k;
    cin>>n>>k;
    if(3*n<=k)
    cout<<"0";
    else
    cout<<3*n-k;
}