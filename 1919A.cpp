// Problem name: 1919A 
// https://codeforces.com/contest/1919/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll a, ll b){
    ll res = a+b;
    if(res%2==0){
        return "Bob";
    }else{
        return "Alice";
    }
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