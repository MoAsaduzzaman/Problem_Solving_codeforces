// Problem name: 1918A 
// https://codeforces.com/contest/1918/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll asad(ll n, ll m){
    ll row = m/2;
    return n*row;
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n,m;
        cin >> n >> m;
        cout << asad(n,m) << endl;
        t--;
    }
    return 0;
}