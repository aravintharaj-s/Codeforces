#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define f first
#define s second
#define mii map<int, int>
#define msi map<string,int>
#define mss map<string,string>
#define mci map<char,int>
#define mic map<int,char>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sort_v(a) sort(a.begin(),a.end())
#define sort_a(a,n) sort(a,a+n)
#define reverse(a) reverse(a.begin(),a.end())
#define pie 3.1415926536;

#define N 101000

ll int n,x[N],first[N*10],last[N*10],occ[N*10];

void solve(){
    ll int n,maxi=INT_MIN;
    cin>>n;
    loop(i,1,n+1){
        cin>>x[i];
        occ[x[i]]++;

        maxi=max(maxi,occ[x[i]]);
        if(!first[x[i]]){
            first[x[i]]=i;
        }
        last[x[i]]=i;


    }
    
    ll int left,right,dis=N;
    loop(i,1, 10 * N){
        if(occ[i]==maxi){
            if(dis>last[i]-first[i]+1){
                dis=last[i]-first[i]
                +1;
                left=first[i];
                right=last[i];
            }

        }
    }
    cout<<left<<" "<<right;
    
    
}
int main()
{
    ios:: sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cout<<fixed; cout<<setprecision(10);
 
    int test_cases = 1;
    // cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
}