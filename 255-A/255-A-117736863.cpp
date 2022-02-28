#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int ch=0,bi=0,ba=0,arr[n];
     for(int i=0;i<n;i++)
     {
	    cin>>arr[i];
	    if(i%3==0)
	    {
	        ch+=arr[i];
	    }
	    else if(i%3==1)
	    {
	        bi+=arr[i];
	    }
	    else
	    {
	        ba+=arr[i];
	    }
	}
     if(ch>bi && ch>ba)
     {
	    cout<<"chest";
	}
	else if(bi>ch && bi>ba)
	{
	    cout<<"biceps";
	}
	else
	{
	    cout<<"back";
	}
}