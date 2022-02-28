#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int a,b;
   int cnt1=0,cnt2=0,cnt3=0;
   cin>>a>>b;
   for(int i=1;i<=6;i++)
   {
        int A=abs(a-i);
        int B=abs(b-i);
        if(A<B)
        cnt1++;
        else if(A>B)
        cnt3++;
        else
        cnt2++;
   }
   cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
}