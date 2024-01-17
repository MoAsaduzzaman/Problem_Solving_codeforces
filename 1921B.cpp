// Problem name: 1921B 
// https://codeforces.com/contest/1921/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){
    string a,b;
    cin >> a >> b;

    ll cnt1 = 0, cnt2 = 0;

    for(ll i=0; i<n; i++){
        if(a[i]=='1' && b[i]=='0'){
            cnt1++;
        }else if(a[i]=='0' && b[i]=='1'){
            cnt2++;
        }
    }

    return max(cnt1,cnt2);
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << asad(n) << endl;
    }
    return 0;
}