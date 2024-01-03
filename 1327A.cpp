// Problem name: 1327A 
// https://codeforces.com/contest/1327/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll n, ll k){
    if(n%2==k%2){
        if(pow(k,2)>n){
            return "NO";
        }else{
            return "YES";
        }
    }else{
        return "NO";
    }
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n,k;
        cin >> n >> k;
        cout << asad(n,k) << endl;
        t--;
    }
    return 0;
}