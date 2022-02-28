#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string N,S;
    vector<string>W,M,C;
    while(n--)
    {
         cin>>N>>S;
         if(S=="rat")
         cout<<N<<endl;
         else if(S=="woman"||S=="child")
         W.push_back(N);
         else if(S=="man")
         M.push_back(N);
         else
         C.push_back(N);
    }
    for (auto o : W)
    {
        cout << o << endl;
    }
    for (auto o : M)
    {
        cout << o << endl;
    }
    for (auto o : C)
    {
        cout << o << endl;
    }
    return 0;
}