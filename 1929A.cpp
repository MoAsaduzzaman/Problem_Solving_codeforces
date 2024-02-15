// Problem name: 1929A 
// https://codeforces.com/contest/1929/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){
    vector <ll> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    ll ans = 0;

    for(ll i=0; i<n-1; i++){
        ans+=a[i+1]-a[i];
    }

    return ans;
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