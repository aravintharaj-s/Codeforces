#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int i,j,n,r,x;
    long int a[200000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
          cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            x=0;
            for(j=0;j<n;j++)
            {
                if(a[i]<a[j])
                    x++;
            }
            cout<<x+1<<" ";
        }
        cout<<endl;

    }

}