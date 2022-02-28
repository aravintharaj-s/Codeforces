#include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int temp;
        cin>>temp;
        if(temp<=10 || temp>21){
            cout<<0;
            return 0;
        }
        if (temp==20){
            cout<<15;
            return 0;
        }
        cout<<4;
        return 0;
    }