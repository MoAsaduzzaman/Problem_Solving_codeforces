// Problem name: 451A 
// https://codeforces.com/contest/451/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

string asad(ll n, ll m){
    ll ans;

    if(n>m){
        ans = (n*m)/n;
    }else{
        ans = (n*m)/m;
    }

    if(ans%2==0) return "Malvika";
    else return "Akshat";
}

int main(){
    ll n,m;
    while(cin >> n >> m){
        cout << asad(n,m) << endl;
    }
    return 0;
}