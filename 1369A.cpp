//Problem name: 1369A
//https://codeforces.com/problemset/problem/1369/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%4==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
    return 0;
}