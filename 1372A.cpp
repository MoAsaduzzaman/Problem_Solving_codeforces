// Problem name: 1372A 
// https://codeforces.com/contest/1372/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void asad(ll n){

    ll ans = 10;

    for(ll i=0; i<n; i++){
        cout << ans << " ";
        // ans+=2;
    }
    cout << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n;
        cin >> n;
        asad(n);
        t--;
    }
}