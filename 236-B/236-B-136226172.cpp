#include<bits/stdc++.h>
using namespace std;
int ans[10000000];
int factors(int n)
{
    if(ans[n]!=0)
    {
        return  ans[n];
    }
    else
    {   long  long int count=0;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
               if(i*i==n)
               {
                   count++;
               }
               else
               {
                   count+=2;
               }
               
               
            }
        }
    ans[n]=count;
    }
    return ans[n];
    
}

int main()
{
    long long int a,b,c,count=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
{
    for(int j=1;j<=b;j++)
    {
        for(int k=1;k<=c;k++)
        {
            count+=factors(i*j*k);
        }
    }
}
cout<<count%1073741824;
}