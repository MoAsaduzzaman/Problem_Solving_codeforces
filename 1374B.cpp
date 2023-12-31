// Problem name: 1374B 
// https://codeforces.com/contest/1374/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll asad(ll n){
    ll ans = n;
    ll count = 0;

    while(ans!=1){
        if(ans%6==0){
            ans/=6;
            count++;
        }else if(ans%3==0){
            ans*=2;
            count++;
        }else{
            count=-1;
            break;
        }
    }
    return count;
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
    return 0;
}