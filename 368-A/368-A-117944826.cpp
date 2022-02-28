#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n,d,m,k=0;
   double profit=0;
   cin>>n>>d;
   int a[n];
   for(int i=0;i<n;i++)
   {
        cin>>a[i];
        profit+=a[i];
   }
     cin>>m;
   sort(a,a+n);
   if(n==m)
   cout<<profit;
   else if(n>m)
   {
        profit=0;
        for(int i=0;i<m;i++)
        profit+=a[i];
        cout<<profit;
   }
   else
   {
        double loss=0;
     loss=(m-n)*d;
       cout<<profit-loss;
   }
}