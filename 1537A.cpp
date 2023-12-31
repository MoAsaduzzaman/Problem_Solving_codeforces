// Problem name: 1537A 
// https://codeforces.com/contest/1537/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll asad(ll n){

    vector <ll> a(n);

    ll ans = 0;

    for(ll i=0; i<n; i++){
        cin >> a[i];
        ans+=a[i];
    }

    if(ans>=n){
        return ans-n;
    }else{
        return 1;
    }
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
