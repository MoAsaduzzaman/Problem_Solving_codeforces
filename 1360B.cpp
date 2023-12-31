// Problem name: 1360B 
// https://codeforces.com/contest/1360/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){

    vector <ll> a(n);
    vector <ll> ans;

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    ll dif = 0;

    for(ll i=1; i<n; i++){
        dif = a[i]-a[i-1];
        ans.push_back(dif);
    }

    sort(ans.begin(),ans.end());

    return ans[0];
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