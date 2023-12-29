// Problem name: 1915D 
// https://codeforces.com/contest/1915/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void asad(ll n, string s){

    cout << s[0];

    for(ll i=1; i<n; i++){
        if((s[i]=='b' || s[i]=='c' || s[i]=='d') && (s[i+1]=='a' || s[i+1]=='e')){
            cout << ".";
        }
        cout << s[i];
    }

    cout << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        asad(n,s);
        t--;
    }
    return 0;
}