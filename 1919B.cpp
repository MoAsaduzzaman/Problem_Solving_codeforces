// Problem name: 1919B 
// https://codeforces.com/contest/1919/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(string s){

    ll count_plus = 0;
    ll count_minus = 0;

    for(ll i=0; i<s.length(); i++){
        if(s[i]=='+') count_plus++;
        else count_minus++; 
    }

    ll max_b_them = max(count_plus,count_minus);
    ll min_b_them = min(count_plus,count_minus);

    return max_b_them-min_b_them;
}

int main(){
    ll t;
    cin >> t;
    while(t){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << asad(s) << endl;
        t--;
    }
    return 0;
}
