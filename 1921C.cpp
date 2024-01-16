// Problem name: 1921C 
// https://codeforces.com/contest/1921/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll n, ll f, ll a, ll b){
    vector <ll> s(n);
    for(ll i = 0; i<n; i++){
        cin >> s[i];
    }

    ll temp = 0; 
    ll mint;

    for(ll i=0; i<n; i++){
        mint = min(b,abs(s[i]-temp)*a);
        f-=mint;
        temp=s[i];
    }

    if(f<=0){
        return "NO";
    }else{
        return "YES";
    }
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n,f,a,b;
        cin >> n >> f >> a >> b;
        cout << asad(n,f,a,b) << endl;
        t--;
    }
    return 0;
}
