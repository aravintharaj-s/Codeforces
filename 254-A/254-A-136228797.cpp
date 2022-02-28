#include <bits/stdc++.h> 
#define sf                  scanf
#define pf                  printf
using namespace std;
int main()
{    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    map<int,vector<int>> group;
    map<int,vector<int>>::iterator it;
    int n,data;
    int flag=1;
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        sf ("%d",&data);
        group[data].push_back(i);
        
    }
    for(auto &i:group)
    {if(i.second.size() %2 !=0)
    {
        flag=0;
        pf ("-1\n");
        break;
    }   
    
    }
    if(flag)
    for(it=group.begin();it!=group.end();it++)
    {int l=(it->second).size();
    for(int i=0;i<l;i+=2)
    {
         pf ("%d %d\n",(it->second)[i],(it->second)[i+1]);
    }
    }

}