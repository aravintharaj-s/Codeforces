#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long d,k;
    cin>>k>>d;
    if(k>1&&d==0)
    {
         cout<<"No solution";
         return 0;
    }
    cout<<d;
    for(int i=0;i<k-1;i++)
    cout<<0;
}