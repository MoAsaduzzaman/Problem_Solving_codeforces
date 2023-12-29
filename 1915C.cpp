// Problem name: 1915C 
// https://codeforces.com/contest/1915/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

string solve_by_asad(int n){

    vector <ll> a(n);

    ll sum = 0;

    for(ll i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }

    ll ans = sqrt(sum);

    if(ans*ans==sum){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n;
        cin >> n;
        cout << solve_by_asad(n) << endl;
        t--;
    }
    return 0;
}
