// Problem name: 1355B 
// https://codeforces.com/contest/1355/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){
    vector <ll> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    ll cnt_temp = 0;
    ll ans = 0;

    for(ll i=0; i<n; i++){
        
        cnt_temp++;
        if(cnt_temp==a[i]){
            ans++;
            cnt_temp = 0;
        }
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

