// Problem name: 1929B 
// https://codeforces.com/contest/1929/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n, ll k){

    ll box = (2*n-2)*2;

    if(k<=box){
        if(k%2==0){
            return k/2;
        }else{
            return (k/2)+1;
        } 
    }else{
        return (k-box)+(2*n-2);
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