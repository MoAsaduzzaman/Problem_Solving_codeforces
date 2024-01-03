// Problem name: 149A 
// https://codeforces.com/contest/149/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll k){

    ll n = 12;
    ll cnt = 0;

    vector <ll> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(k==0){
        return 0;
    }
        for(ll i=n-1; i>=0; i--){
            if(k>0){
                k=k-a[i];
                cnt++;
            }
        }

        if(k>0) return -1;
        else return cnt;
    
}

int main(){
    ll k;
    cin >> k;
    cout << asad(k) << endl;
    return 0;
}