// Problem name: 148A 
// https://codeforces.com/contest/148/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll asad(){
    ll k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    ll cnt = 0;

    for(ll i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            cnt++;
        }
    }

    return cnt;
}

int main(){
    cout << asad() << endl;
    return 0;
}