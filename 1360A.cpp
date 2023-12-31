// Problem name: 1360A 
// https://codeforces.com/contest/1360/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll asad(ll a, ll b){
    if(a>b) swap(a,b);
    ll ans = max(a*2,b);
    return ans*ans;

}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll a,b;
        cin >> a >> b;
        cout << asad(a,b) << endl;
        t--;
    }
    return 0;
}