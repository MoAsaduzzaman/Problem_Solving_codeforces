// Problem name: 1624A 
// https://codeforces.com/contest/1624/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){
    vector <ll> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    return a[n-1]-a[0];
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n;
        cin >> n;
        cout << asad(n) << endl;
        t--;
    }
    return 0;
}