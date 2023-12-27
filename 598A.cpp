// Problem name: 598A 
// https://codeforces.com/contest/598/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll asad(ll n){
    ll ans = n*(n+1)/2;
    ll temp = 1;
    while(temp<=n){
        ans-=2*temp;
        temp=temp*2;
    }
    return ans;
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
