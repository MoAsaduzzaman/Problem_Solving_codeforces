// Problem name: 34B 
// https://codeforces.com/contest/34/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int asad(ll n, ll m){

    vector <ll> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    ll sum = 0;

    for(ll j=0; j<m; j++){
        if(a[j]<=0) sum+=a[j];
    }

    return abs(sum);
}

int main(){
    ll n,m;
    cin >> n >> m;
    cout << asad(n,m) << endl;
    return 0;
}