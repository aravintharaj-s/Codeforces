#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   long k,sum=0;
   cin>>n>>k;
   int b[n];
   std::pair<int,int>a[n];
   for(int i=1;i<=n;i++)
   {
        int b;
        cin>>b;
        a[i].first=b;
        a[i].second=i;
        sum+=b;
   }
   if(sum==k)
   {
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
          {
               cout<<a[i].second<<" ";
          }
          return 0;
   }
   sort(a+1,a+n+1);
   sum=0;
   long c=0;
   for(int i=1;i<=n;i++)
   {
        if(k<a[i].first)
        break;
        k-=a[i].first;
        b[c]=a[i].second;c++;
   }
   cout<<c<<endl;
   for(int i=0;i<c;i++)
   {
        cout<<b[i]<<" ";
   }
}