//Problem name: 1702A
//https://codeforces.com/problemset/problem/1702/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int m;
    cin >> m;

    long long int ans = 1;

    for(int i=0; i<100; i++){
        if(ans*10<=m){
           ans*=10;
        }  
    }
    cout << m-ans << endl;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}