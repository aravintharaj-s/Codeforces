#include<bits/stdc++.h>
using namespace std;

int n,s,con[101][3],idx[6]={0,1,3,4,6,7};
string name[101];
char cur[100];
vector<string>sol[3];

int what(){
    bool ok;

    ok=true;
    for(int i=1;i<6;i++){
        if(cur[idx[i]]!=cur[idx[i-1]]){
            ok=false;
            break;
        }
    }
    if(ok)
        return 0;
    ok=true;
    for(int i=1;i<6;i++){
        if(cur[idx[i]]-'0'>=cur[idx[i-1]]-'0'){
            ok=false;
            break;
        }
    }
    if(ok){
        return 1;
    }
    return 2;
}

int main(){
    int mx[3]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>name[i];
        for(int j=0;j<s;j++){
            cin>>cur;
            ++con[i][what()];
        }
        for(int k=0;k<3;k++){
            mx[k]=max(mx[k],con[i][k]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(con[i][j]==mx[j]){
                sol[j].push_back(name[i]);
                //cout<<name[i]<<"\n";
            }
        }
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0;i<sol[0].size();i++){
        cout<<sol[0][i];
        if(i<sol[0].size()-1){
            cout<<", ";
        }
    }
    cout<<".\n";
    cout<<"If you want to order a pizza, you should call: ";
    for(int i=0;i<sol[1].size();i++){
            cout<<sol[1][i];
            if(i<sol[1].size()-1){
                cout<<", ";
            }
    }
    cout<<".\n";
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0;i<sol[2].size();i++){
        cout<<sol[2][i];
        if(i<sol[2].size()-1){
            cout<<", ";
        }
    }
    cout<<".\n";
}