#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length(),cnt4=0,cnt7=0;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='4')
         cnt4++;
         else if(s[i]=='7')
         cnt7++;
    }
    if(cnt4==0&&cnt7==0)
    cout<<-1;
    else if(cnt4>=cnt7)
    cout<<4;
    else
    cout<<7;
}