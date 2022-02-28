#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int n=s.length(),c=0;
     sort(s.begin(),s.end());
     char d=s[n-1];
     for(int i=n-2;i>=0;i--)
     {
          if(s[i]==d)
          cout<<d;
          else
          {
               cout<<d;
               return 0;
          }
     }
     cout<<d;
}