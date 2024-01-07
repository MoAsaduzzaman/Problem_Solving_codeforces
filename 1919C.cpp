// Problem name: 1919C 
// https://codeforces.com/contest/1919/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int asad(vector<ll>& arr){
    ll n = arr.size();
    ll a = 1e9, b = 1e9, cnt = 0;

    for(ll i=0; i<n; i++){
        if (a>b){
            swap(a, b);
        }
        if(arr[i]<=a){
            a = arr[i];
        }else if(arr[i] <= b){
            b = arr[i];
        }else{
            a = arr[i];
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ll t;
    cin >> t;

    while(t) {
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << asad(arr) << endl;
        t--;
    }
    return 0;
}