// Problem name: 1930A 
// https://codeforces.com/contest/1930/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector <ll> a(2*n);

        for(ll i=0; i<2*n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll maxScore = 0;
        for (ll i = 0; i < n*2; i+=2) {
            maxScore += min(a[i], a[i+1]);
        }
        cout << maxScore << endl;
    }
    return 0;
}