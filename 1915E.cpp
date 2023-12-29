// Problem name: 1915E 
// https://codeforces.com/contest/1915/problem/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long

string solve_by_asad(){
    ll n;
    cin >> n;

    ll sum = 0;
    ll ans = false;

    vector <ll> a(n + 1);

    for (ll i = 1; i <= n; i++){
        cin >> a[i];
    }

    map <ll, ll> m;
    m[0] = 1;

    for (ll i = 1; i <= n; i++) {
        if(i%2){
            sum+=a[i];
        }else{
            sum-=a[i];
        }
            
        if(m[sum]){
            ans = true; 
        }else{
            m[sum]++;
        }  
    }

    if(ans) return "YES";
    else return "NO";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        cout << solve_by_asad() << endl;
    }

    return 0;
}

