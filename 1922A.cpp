// Problem name: 1922A 
// https://codeforces.com/contest/1922/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll n){
    string a,b,c;
    cin >> a >> b >> c;

    ll count = 0;

    for(ll i=0; i<n; i++){
        if(a[i] == c[i] || b[i] == c[i]){
            count++;
        } 
    }

    if(count==n) return "NO";
    else return "YES";
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
}