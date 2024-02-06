// Problem name: 1927A 
// https://codeforces.com/contest/1927/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(ll n){
    string s;
    cin >> s;

    ll firstB = s.find('B');
    ll lastB = s.rfind('B');
    return lastB - firstB + 1;
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